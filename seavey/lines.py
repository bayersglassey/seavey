from typing import Tuple, Iterable, NamedTuple


class LogicalLine(NamedTuple):
    """Represents a "logical" line of C source code.

    Source lines, i.e. the raw lines from a source file, may end with an
    "escaped newline", i.e. a backslash followed immediately by a newline.
    Such lines are "spliced" together with the following line (which may
    itself be spliced to the next, etc).
    A "logical" line means either the result of such splicing, or a raw
    line which was not spliced."""

    # Source filename.
    # Should be usable as a unique key into a dict of source files; maybe
    # that means absolute paths!..
    filename: str

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
    # the lines which were spliced together).
    splices: Tuple[int, ...]


def iter_logical_lines(filename: str, source_lines: Iterable[str]):
    r"""

        >>> source_lines = [
        ...     'Hello world.\n',
        ...     'Here is \\\n',
        ...     'a spliced line!\n',
        ...     'The end.\n',
        ... ]
        >>> for line in iter_logical_lines('test.c', source_lines):
        ...     print(line)
        LogicalLine(filename='test.c', line_i=0, text='Hello world.\n', splices=())
        LogicalLine(filename='test.c', line_i=1, text='Here is a spliced line!\n', splices=(10,))
        LogicalLine(filename='test.c', line_i=3, text='The end.\n', splices=())

    """
    logical_text = None
    logical_line_i = None
    logical_splices = []
    for line_i, text in enumerate(source_lines):
        text_len = len(text)
        escaped_newline = text.endswith('\\\n')
        if escaped_newline:
            text = text[:-2]
        if logical_text is None:
            logical_text = text
            logical_line_i = line_i
        else:
            logical_text += text
        if escaped_newline:
            logical_splices.append(text_len)
        else:
            yield LogicalLine(
                filename=filename,
                line_i=logical_line_i,
                text=logical_text,
                splices=tuple(logical_splices),
            )
            logical_text = None
            logical_splices.clear()
    if logical_text is not None:
        raise Exception("Trailing escaped newline")
