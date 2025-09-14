import struct
from typing import Dict, NamedTuple, Union
from operator import attrgetter


DEFAULT_INT_SIZE = 4
DEFAULT_FLOAT_SIZE = 4
DEFAULT_POINTER_SIZE = 4

INT_FORMATS = {
    # char:
    (False, 1): 'B',
    (True, 1): 'b',
    # short:
    (False, 2): 'H',
    (True, 2): 'h',
    # int/long:
    (False, 4): 'I',
    (True, 4): 'i',
    # long long:
    (False, 8): 'Q',
    (True, 8): 'q',
}

FLOAT_FORMATS = {
    # float:
    4: 'f',
    # double:
    8: 'd',
}


class SeaMemAllocation(NamedTuple):
    name: str
    data: bytes

    def location(self, offset: int = 0) -> 'SeaMemLocation':
        return SeaMemLocation(self, offset)

    def get(self, offset: int, size: int = 1) -> bytes:
        start = offset
        end = start + size
        data = self.data
        if start < 0 or end > len(data):
            raise IndexError(f"[{start}: {end}] out of range [0: {len(data)}]")
        return data[start: end]


class SeaMemLocation(NamedTuple):
    alloc: SeaMemAllocation
    offset: int

    def get(self, size: int = 1) -> bytes:
        return self.alloc.get(self.offset, size)


class SeaVoid(NamedTuple):
    size = 0


class SeaInt(NamedTuple):
    signed: bool = True
    size: int = DEFAULT_INT_SIZE

    @property
    def struct_format(self) -> str:
        return INT_FORMATS[(self.signed, self.size)]

    def to_bytes(self, value: int) -> bytes:
        return struct.pack(self.struct_format, value)

    def to_int(self, location: SeaMemLocation) -> int:
        data = location.get(self.size)
        return struct.unpack(self.struct_format, data)[0]


class SeaFloat(NamedTuple):
    size: int = DEFAULT_FLOAT_SIZE

    @property
    def struct_format(self) -> str:
        return FLOAT_FORMATS[self.size]

    def to_bytes(self, value: float) -> bytes:
        return struct.pack(self.struct_format, value)

    def to_float(self, location: SeaMemLocation) -> float:
        data = location.get(self.size)
        return struct.unpack(self.struct_format, data)[0]

    def to_int(self, location: SeaMemLocation) -> int:
        return int(self.to_float(location))


class SeaField(NamedTuple):
    name: str
    type: 'SeaType'

    @property
    def size(self) -> int:
        return self.type.size


class SeaStruct(NamedTuple):
    tag: str
    fields: Dict[str, SeaField]

    @property
    def size(self) -> int:
        return sum(map(attrgetter('type'), self.fields.values()))

    def offset_of(self, name: str) -> int:
        offset = 0
        for field_name, field in self.fields.items():
            if field_name == name:
                return offset
            offset += field.size
        raise KeyError(name)

    def dot(self, location: SeaMemLocation, name: str) -> 'SeaValue':
        field = self.fields[name]
        offset = location.offset + self.offset_of(name)
        return SeaValue(location.replace(offset=offset), field.type)


class SeaUnion(NamedTuple):
    fields: Dict[str, SeaField]
    tag: str = None

    @property
    def size(self) -> int:
        return sum(map(attrgetter('type'), self.fields.values()))

    def dot(self, location: SeaMemLocation, name: str) -> 'SeaValue':
        field = self.fields[name]
        return SeaValue(location, field.type)


class SeaEnum(NamedTuple):
    members: Dict[str, int]
    underlying_type: SeaInt
    tag: str = None


class SeaPointer(NamedTuple):
    child_type: 'SeaType'
    size: int = DEFAULT_POINTER_SIZE
    length: int = None # if not None, this is an array

    def deref(self, location: SeaMemLocation) -> 'SeaValue':
        return SeaValue(location, self.child_type)

    def dot(self, location: SeaMemLocation, name: str) -> 'SeaValue':
        return self.child_type.dot(location, name)

    def index(self, location: SeaMemLocation, i: int) -> 'SeaValue':
        offset = location.offset + i
        return SeaValue(location.replace(offset=offset), self.child_type)


SeaType = Union[
    SeaVoid,
    SeaInt,
    SeaFloat,
    SeaStruct,
    SeaUnion,
    SeaEnum,
    SeaPointer,
]


class SeaValue(NamedTuple):
    location: SeaMemLocation
    type: SeaType

    @staticmethod
    def from_py(value) -> 'SeaValue':
        if value is None:
            type = SeaPointer()
            data = b'\0' * type.size
        elif isinstance(value, int):
            type = SeaInt()
            data = type.to_bytes(value)
        elif isinstance(value, float):
            type = SeaFloat()
            data = type.to_bytes(value)
        elif isinstance(value, list):
            if value:
                value0 = value[0]
                if isinstance(value0, int):
                    child_type = SeaInt()
                elif isinstance(value0, float):
                    child_type = SeaFloat()
                else:
                    raise TypeError(f"Can't make SeaValue from list of {type(value)}")
                data = b''.join(child_type.to_bytes(x) for x in value)
                type = SeaPointer(child_type, length=len(value))
            else:
                type = SeaPointer(SeaVoid(), length=0)
                data = b''
        else:
            raise TypeError(f"Can't make SeaValue from {type(value)}")
        location = SeaMemAllocation('<from_py>', data).location()
        return SeaValue(location, type)

    def cast(self, type: SeaType) -> 'SeaValue':
        return self.replace(type=type)

    def __call__(self, *args) -> 'SeaValue':
        return self.type.call(self.location, *args)

    def to_int(self) -> int:
        return self.type.to_int(self.location)

    __int__ = to_int

    def __add__(self, other: 'SeaValue') -> 'SeaValue':
        self_is_pointer = isinstance(self, SeaPointer)
        other_is_pointer = isinstance(other, SeaPointer)
        if self_is_pointer:
            if other_is_pointer:
                raise TyprError(f"Can't add two pointers: {self} {other}")
            location = self.location
            offset = location.offset + other.to_int()
            return self.replace(location=location.replace(offset=offset))
        elif other_is_pointer:
            location = other.location
            offset = location.offset + self.to_int()
            return other.replace(location=location.replace(offset=offset))
        else:
            self_type = type(self)
            other_type = type(other)
            signed = self_type.signed or other_type.signed
            size = max(self_type.size, other_type.size)
            type = SeaIntType(signed=signed, size=size)
            x = self.to_int()
            y = other.to_int()
            data = type.to_bytes(x + y)
            location = SeaMemAllocation('<int_add>', data).location()
            return SeaValue(location, type)

    def ref(self) -> 'SeaValue':
        return SeaValue(SeaPointer(self.type))

    def deref(self) -> 'SeaValue':
        return self.type.deref(self.location)

    def dot(self, name: str) -> 'SeaValue':
        return self.type.dot(self.location, attr)

    __getattr__ = dot

    def index(self, i: Union[int, 'SeaValue']) -> 'SeaValue':
        if isinstance(i, SeaValue):
            i = i.to_int()
        return self.type.index(self.location, i)

    __getitem__ = index
