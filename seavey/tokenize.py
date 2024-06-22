import re
import sys
from typing import Tuple, Iterable, Sequence, NamedTuple


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

    def unexpected(self, msg=None):
        if msg is not None:
            fullmsg = f"Unexpected ({msg}): {self!r}"
        else:
            fullmsg = f"Unexpected: {self!r}"
        raise TokenizeError(fullmsg)

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
                print(f'{token.info()} {token.value!r}')
        else:
            print(f'{token.info()} {token.value}')
