import os
import sys
from typing import List, Tuple, Iterable, NamedTuple
from contextlib import nullcontext
from itertools import islice


class SourceFileInfo(NamedTuple):

    # In the sense of os.path.basename
    filename: str

    # In the sense of os.path.abspath
    filepath: str

    @classmethod
    def from_filename(cls, filename: str, **kwargs) -> 'SourceFileInfo':
        return cls(
            filename=filename,
            filepath=os.path.abspath(filename),
            **kwargs)


class LogicalLine(NamedTuple):
    """Represents a "logical" line of C source code.

    Source lines, i.e. the raw lines from a source file, may end with an
    "escaped newline", i.e. a backslash followed immediately by a newline.
    Such lines are "spliced" together with the following line (which may
    itself be spliced to the next, etc).
    A "logical" line means either the result of such splicing, or a raw
    line which was not spliced."""

    file: SourceFileInfo

    # Index (starting at 0) of this line's first source line within the
    # source file.
    line_i: int

    # Text of this line.
    # May be the result of "splicing" multiple source lines together.
    # NOTE: we are using str, not bytes!.. all character indices will
    # be in terms of the decoded text, not the raw bytes.
    text: str

    # If this logical line is also a single source line, this is None.
    # If this logical line is the result of "splicing" multiple source
    # lines together, then this is a list of the lengths of the source
    # lines which ended in an escaped newline (i.e. all but the last of
    # the lines which were spliced together), not counting their escaped
    # newlines in the length.
    splices: Tuple[int, ...]

    def __repr__(self):
        MAX_LEN = 20
        if len(self.text) > MAX_LEN:
            textrepr = f'{self.text[:MAX_LEN]!r}...plus {len(self.text) - MAX_LEN} more'
        else:
            textrepr = repr(self.text)
        return f'{self.__class__.__name__}(line_i={self.line_i!r}, text={textrepr})'

    def info(self) -> str:
        return f"[{self.file.filename}:{self.line_i}]"

    def source_len(self) -> int:
        """Combined length of this logical line's source lines"""
        # Length of our text, plus 2 for each splice (i.e. the backslash
        # and newline for each splice)
        return len(self.text) + len(self.splices) * 2

    def logical_len(self) -> int:
        """Length of this logical line"""
        return len(self.text)

    def get_source(self, pos: int) -> Tuple[int, int]:
        """Given an index into self.text, returns its (line_i, pos)
        within the source file.
        In other words, translates logical coordinates into source
        coordinates.

            >>> line = LogicalLine(
            ...     file=...,
            ...     line_i=10,
            ...     text="ABBCCC",
            ...     splices=(1, 2),
            ... )
            >>> for pos in range(len(line.text)):
            ...     print(line.get_source(pos))
            (10, 0)
            (11, 0)
            (11, 1)
            (12, 0)
            (12, 1)
            (12, 2)

        """

        # Bounds checks
        if pos < 0:
            raise IndexError(f"{self.info()} {pos} < 0")
        logical_len = self.logical_len()
        if pos >= logical_len:
            raise IndexError(f"{self.info()} {pos} >= {logical_len}")

        # Algorithm
        line_i = self.line_i
        splice_pos = 0 # logical position of start of current slice
        for splice_len in self.splices:
            if pos < splice_pos + splice_len:
                return line_i, pos - splice_pos
            line_i += 1
            splice_pos += splice_len
        return line_i, pos - splice_pos


class SourceFile(NamedTuple):
    """Represents a source file containing C code."""

    file: SourceFileInfo
    lines: List[LogicalLine]

    def __repr__(self):
        MAX_LEN = 4
        if len(self.lines) > MAX_LEN:
            linesrepr = ', '.join(repr(line)
                for line in islice(self.lines, MAX_LEN))
            linesrepr = f'[{linesrepr}, ...plus {len(self.lines) - MAX_LEN} more]'
        else:
            linesrepr = repr(self.lines)
        return f'{self.__class__.__name__}(file={self.file!r}, lines={linesrepr})'

    def add_lines(self, source_lines: Iterable[str]):
        self.lines.extend(iter_logical_lines(self.file, source_lines))

    @classmethod
    def load(cls, file) -> 'SourceFile':
        if isinstance(file, str):
            filename = file
            if filename == '-':
                file = sys.stdin
                ctx = nullcontext()
            else:
                file = open(filename, 'r')
                ctx = file
        else:
            filename = file.name
            ctx = nullcontext()
        self = cls(
            file=SourceFileInfo.from_filename(filename),
            lines=[],
        )
        with ctx:
            self.add_lines(file)
        return self


def iter_logical_lines(file: SourceFileInfo, source_lines: Iterable[str]):
    r"""

        >>> file = SourceFileInfo(filename='a.c', filepath='/src/a.c')
        >>> source_lines = [
        ...     'Hello world.\n',
        ...     'Here is \\\n',
        ...     'a spliced line!\n',
        ...     'The end.\n',
        ... ]
        >>> for line in iter_logical_lines(file, source_lines):
        ...     print((line.line_i, line.text, line.splices))
        (0, 'Hello world.\n', ())
        (1, 'Here is a spliced line!\n', (8,))
        (3, 'The end.\n', ())

    """
    logical_text = None
    logical_line_i = None
    logical_splices = []
    for line_i, text in enumerate(source_lines):
        escaped_newline = text.endswith('\\\n')
        if escaped_newline:
            text = text[:-2]
        if logical_text is None:
            logical_text = text
            logical_line_i = line_i
        else:
            logical_text += text
        if escaped_newline:
            logical_splices.append(len(text))
        else:
            yield LogicalLine(
                file,
                logical_line_i,
                logical_text,
                tuple(logical_splices),
            )
            logical_text = None
            logical_splices.clear()
    if logical_text is not None:
        raise Exception("Trailing escaped newline")
