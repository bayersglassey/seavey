from typing import List, Dict, Optional, NamedTuple


INT_SIZE = 4


class CStructField(NamedTuple):
    name: str


class CStruct(NamedTuple):
    fields: List[CStructField]


class MemorySegment:
    def __init__(self, start, size, data=None):
        self.start = start
        self.size = size
        self.end = start + size
        if data is None:
            data = bytearray(size)
        else:
            assert len(data) == size, (len(data), size)
        self.data = data

    def __repr__(self):
        return f'{self.__class__.__name__}({hex(self.start)}, {hex(self.size)}, ...)'


class Memory:

    # Rules:
    # * segments MUST NOT overlap
    # * contiguous segments MUST be combined
    segments: List[MemorySegment]

    def get_segment(self, i) -> Optional[MemorySegment]:
        for segment in self.segments:
            if segment.start <= i < segment.end:
                return segment
        return None

    def get_byte(self, i) -> int:
        segment = self.get_segment(i)
        if segment is None:
            raise KeyError(f"No segment containing {hex(i)}")
        return int.from_bytes(segment[i], 'little')

    def get_int(self, i, size=1, signed=False) -> int:
        segment = self.get_segment(i)
        if segment is None:
            raise KeyError(f"No segment containing {hex(i)}")
        data = segment[i:i+size]
        if len(data) != size:
            raise KeyError(f"Segment {segment!r} doesn't have {hex(size)} bytes starting at {hex(i)}")
        return int.from_bytes(data, 'little', signed=signed)


class Machine:
    memory: Memory
