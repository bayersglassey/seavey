from abc import ABCMeta, abstractmethod
from typing import List, Dict, Union, NamedTuple


class SeaType(metaclass=ABCMeta):
    size: Optional[int]


class SeaVoid(SeaType):
    """The void type"""


class SeaInt(SeaType):
    """An integer type, e.g. _Bool, char, unsigned char, signed char, int, etc"""

    is_bool: bool = False
    size: int


class SeaBool(SeaType):
    is_bool = True
    size = 1


class SeaSystem(NamedTuple):
    """Stores information about e.g. the sizes of various basic types"""

    # "Equivalent to either signed char or unsigned char (which one is
    # implementation-defined and may be controlled by a compiler commandline
    # switch), but char is a distinct type, different from both signed char
    # and unsigned char."
    char: 'SeaInt'

    # unsigned integer types
    bool: 'SeaInt'
    uchar: 'SeaInt'
    ushort: 'SeaInt'
    uint: 'SeaInt'
    ulong: 'SeaInt'
    ullong: 'SeaInt'

    # signed integer types
    schar: 'SeaInt'
    short: 'SeaInt'
    int: 'SeaInt'
    long: 'SeaInt'
    llong: 'SeaInt'


class SeaMemAllocation(NamedTuple):
    system: SeaSystem
    size: int
    values: Dict[int, 'SeaValue']


class SeaMemLocation(NamedTuple):
    alloc: SeaMemAllocation
    offset: int


SeaType = Union[
]


class SeaValue(NamedTuple):
    location: SeaMemLocation
    type: SeaType
