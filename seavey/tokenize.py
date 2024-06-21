import re
import sys
from typing import Tuple, Iterable, NamedTuple


def make_token_regex(
        descriptions: Iterable[Tuple[str, str]],
        ) -> re.Pattern:
    return re.compile(
        '|'.join(f'(?P<{name}>{pat})'
            for name, pat in descriptions),
        re.M | re.S)


class TokenizeError(Exception):
    pass


class Token(NamedTuple):
    kind: str
    value: str
    pos: int

    def info(self):
        return f'[{self.pos} {self.kind: <10}]'

    def unexpected(self, msg):
        raise TokenizeError(f"Unexpected (msg): {self!r}")

    def expect(self, kind):
        if self.kind != kind:
            self.unexpected(f"Expected {kind!r}")


def tokenize(code, regex: re.Pattern):
    # Based on: https://docs.python.org/3/library/re.html#writing-a-tokenizer
    for m in regex.finditer(code):
        kind = m.lastgroup
        value = m.group()
        pos = m.start()
        yield Token(kind, value, pos)


def print_tokens(tokens: Iterable[Token], *, include_whitespace=False):
    for token in tokens:
        if token.kind != 'whitespace':
            print(f'{token.info()} {token.value}')
        elif include_whitespace:
            print(f'{token.info()} {token.value!r}')
