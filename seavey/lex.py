import re
import sys
from argparse import ArgumentParser

from seavey.tokenize import make_token_regex, tokenize, print_tokens


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
""".split()

KEYWORDS = set("""
    auto break case char const continue default
    do double else enum extern float for goto if
    int long register return short signed sizeof
    static struct switch typedef union unsigned
    void volatile while
""".split())

PP_KEYWORDS = set("""
    include define undef
    if ifdef ifndef
    error pragma
""".split())

D = r'[0-9]'
L = r'[a-zA-Z_]'
LD = r'[a-zA-Z_0-9]'
H = r'[a-fA-F0-9]'
E = rf'[Ee][+-]?{D}+'
FS = r'[fFlL]'
IS = r'[uUlL]'

TOKEN_DESCRIPTIONS = (
    # Whitespace
    ('NEWLINE', r'\n'),
    ('WHITESPACE', r'([ \t\v\f]|\\\n)+'),
    ('LINE_COMMENT', r'//[^\n]*'),
    ('MULTI_COMMENT', r'/\*.*?\*/'),

    # Language elements
    ('IDENTIFIER', rf'{L}{LD}*'),
    ('CONSTANT', '|'.join((
        rf'0[xX]{H}+{IS}*',
        rf'{D}+{IS}*',
        r"L?'(?:[^']|\\.)+'",
        rf'{D}+{E}{FS}?',
        rf'{D}*\.{D}+(?:{E})?{FS}?',
        rf'{D}+\.{D}*(?:{E})?{FS}?',
    ))),
    ('STRING_LITERAL', r'L?"(?:[^"]|\\.)*"'),
    ('OPERATOR', '|'.join(re.escape(op) for op in OPERATORS)),

    # Preprocessor
    ('PP_HASH', r'#'),
    ('PP_HASHPAIR', r'##'),

    # Other
    ('UNEXPECTED', r'.'),
)


TOKEN_REGEX = make_token_regex(TOKEN_DESCRIPTIONS)


def lex(code):
    return tokenize(code, TOKEN_REGEX)


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
    print_tokens(tokens,
        whitespace_kinds=('NEWLINE', 'WHITESPACE'),
        include_whitespace=args.include_whitespace)


if __name__ == '__main__':
    main()
