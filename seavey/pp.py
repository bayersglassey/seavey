import sys
from typing import List, Iterable, NamedTuple
from argparse import ArgumentParser

from seavey.tokenize import Token
from seavey.lex import lex, print_c_tokens


class TokenLine(NamedTuple):
    tokens: List[Token]


def iter_token_lines(tokens: Iterable[Token]):
    n_lines = 0
    line_tokens = []
    for token in tokens:
        if token.kind == 'NEWLINE':
            yield TokenLine(tokens=line)
        else:
            line.append(token)
    if line:
        yield line


def preprocess(tokens: Iterable[Token]):
    for token in tokens:
        yield token


def main():
    parser = ArgumentParser()
    parser.add_argument('file', nargs='?', default='-')
    parser.add_argument('-w', '--include-whitespace', default=False, action='store_true',
        help="Show whitespace tokens")
    args = parser.parse_args()

    if args.file == '-':
        code = sys.stdin.read()
    else:
        code = open(args.file, 'r').read()

    tokens = lex(code)
    tokens = preprocess(tokens)
    print_c_tokens(tokens,
        include_whitespace=args.include_whitespace)


if __name__ == '__main__':
    main()
