import re
import sys
from typing import Tuple, Iterable, Sequence, NamedTuple

from seavey.sourcefile import LogicalLine


def make_token_regex(
        descriptions: Iterable[Tuple[str, str]],
        ) -> re.Pattern:
    # Based on: https://docs.python.org/3/library/re.html#writing-a-tokenizer
    return re.compile(
        '|'.join(f'(?P<{name}>{pat})'
            for name, pat in descriptions))


class ParseError(Exception):
    pass


class Token(NamedTuple):
    line: LogicalLine
    kind: str
    value: str

    # Index of the start of this token within self.line
    pos: int

    def info(self):
        return f'[{self.line.file.filename}:{self.line.line_i+1}:{self.pos+1}]'

    def value_repr(self, max_len):
        if len(self.value) > max_len:
            return f'{self.value[:max_len]!r}...plus {len(self.value) - max_len} more'
        else:
            return repr(self.value)

    def unexpected(self, msg=None):
        if msg is None:
            msg = "Unexpected"
        else:
            msg = f"Unexpected ({msg})"
        msg = f"{self.info()} {msg}: {self.value_repr(20)}"
        raise ParseError(msg)

    def expect(self, kind):
        if self.kind != kind:
            self.unexpected(f"Expected {kind!r}")


def tokenize(line: LogicalLine, regex: re.Pattern, start=0):
    # Based on: https://docs.python.org/3/library/re.html#writing-a-tokenizer
    for m in regex.finditer(line.text, start):
        kind = m.lastgroup
        value = m.group()
        pos = start + m.start()
        yield Token(line, kind, value, pos)


def print_tokens(tokens: Iterable[Token],
        *,
        whitespace_kinds: Sequence[str] = (),
        include_whitespace=False,
        unexpected_kinds: Sequence[str] = (),
        ):
    for token in tokens:
        if token.kind in unexpected_kinds:
            token.unexpected()
        elif token.kind in whitespace_kinds:
            if include_whitespace:
                print(f'{token.info()} {token.kind} {token.value!r}')
        else:
            print(f'{token.info()} {token.kind} {token.value}')
