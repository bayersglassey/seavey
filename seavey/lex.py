import sys
import re
from typing import NamedTuple
from argparse import ArgumentParser


# Based on:
# https://www.lysator.liu.se/c/ANSI-C-grammar-l.html
#
#     ANSI C grammar, Lex specification
#     In 1985, Jeff Lee published this Lex specification together with a
#     Yacc grammar for the April 30, 1985 ANSI C draft.
#     Tom Stockfisch reposted both to net.sources in 1987; that original,
#     as mentioned in the answer to question 17.25 of the comp.lang.c FAQ,
#     can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.
#     I intend to keep this version as close to the current C Standard grammar
#     as possible; please let me know if you discover discrepancies.
#
#     Jutta Degener, 1995
#

OPERATORS = r"""
    ...
    >>= <<= += -= *= /= %= &= ^= |=
    >> <<
    ++ --
    ->
    && ||
    <= >= == !=
    ; { } , : = ( ) [ ] .
    & ! ~ - + * / % < > ^ | ?
"""

D = r'[0-9]'
L = r'[a-zA-Z_]'
LD = r'[a-zA-Z_0-9]'
H = r'[a-fA-F0-9]'
E = rf'[Ee][+-]?{D}+'
FS = r'[fFlL]'
IS = r'[uUlL]'

TOKEN_DESCRIPTIONS = (
    # Whitespace
    ('whitespace', r'([ \t\v\n\f]|\\\n)+'),
    ('slcomment', r'//[^\n]*'),
    ('mlcomment', r'/\*.*?\*/'),

    # Language elements
    ('identifier', rf'{L}{LD}*'),
    ('lithex', rf'0[xX]{H}+{IS}*'),
    ('litoct', rf'0{D}+{IS}*'),
    ('litint', rf'{D}+{IS}*'),
    ('litchar', r"L?'(?:[^']|\\.)+'"),
    ('litfloat', '|'.join((
        rf'{D}+{E}{FS}?',
        rf'{D}*\.{D}+(?:{E})?{FS}?',
        rf'{D}+\.{D}*(?:{E})?{FS}?',
    ))),
    ('litstring', r'L?"(?:[^"]|\\.)*"'),
    ('operator', '|'.join(
        f'(?:{re.escape(op)})' for op in OPERATORS.split())),

    # Preprocessor
    ('ppjoin', r'##'),
    ('ppdirective', r'#\s*\w+'),

    # Other
    ('unexpected', r'.'),
)


TOKEN_REGEX = re.compile(
    '|'.join(f'(?P<{name}>{pat})'
        for name, pat in TOKEN_DESCRIPTIONS).encode(),
    re.M | re.S)


class Token(NamedTuple):
    kind: str
    value: str
    pos: int


def tokenize(code):
    # Based on: https://docs.python.org/3/library/re.html#writing-a-tokenizer
    for m in TOKEN_REGEX.finditer(code):
        kind = m.lastgroup
        value = m.group()
        pos = m.start()
        yield Token(kind, value, pos)


def main():
    parser = ArgumentParser()
    parser.add_argument('file', nargs='?', default='-')
    parser.add_argument('-w', '--include-whitespace', default=False, action='store_true',
        help="Show whitespace tokens")
    args = parser.parse_args()
    if args.file == '-':
        code = sys.stdin.read().encode()
    else:
        code = open(args.file, 'rb').read()
    for token in tokenize(code):
        lead = f'[{token.pos} {token.kind: <10}] '
        if token.kind != 'whitespace':
            print(f'{lead}{token.value.decode()}')
        elif args.include_whitespace:
            print(f'{lead}{token.value.decode()!r}')


if __name__ == '__main__':
    main()
