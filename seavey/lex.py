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

WHITESPACE_KINDS = ('NEWLINE', 'WHITESPACE')

TOKEN_DESCRIPTIONS = (
    ###############################################################
    # Whitespace
    ('NEWLINE', r'\n'),
    ('WHITESPACE', r'([ \t\v\f]|\\\n)+'),
    ('LINE_COMMENT', r'//(?:[^\n]|\\\n)*'),
    ('MULTI_COMMENT', r'/\*.*?\*/'),

    ###############################################################
    # Language elements
    ('IDENTIFIER', rf'{L}{LD}*'),
    ('CONSTANT', '|'.join((
        rf'0[xX]{H}+{IS}*',
        rf'{D}+{IS}*',

        # NOTE: beware escaped newlines within token
        r"L?'(?:[^']|\\.)+'",

        rf'{D}+{E}{FS}?',
        rf'{D}*\.{D}+(?:{E})?{FS}?',
        rf'{D}+\.{D}*(?:{E})?{FS}?',
    ))),

    # NOTE: beware escaped newlines within token
    ('STRING_LITERAL', r'L?"(?:[^"]|\\.)*"'),

    ('OPERATOR', '|'.join(re.escape(op) for op in OPERATORS)),

    ###############################################################
    # Preprocessor
    ('PP_HASH', r'#'),
    ('PP_HASHPAIR', r'##'),

    ###############################################################
    # Other
    ('UNEXPECTED', r'.'),
)


TOKEN_REGEX = make_token_regex(TOKEN_DESCRIPTIONS)


def lex(code):
    return tokenize(code, TOKEN_REGEX)


def print_c_tokens(tokens, unexpected_ok=False, **kwargs):
    print_tokens(tokens,
        whitespace_kinds=WHITESPACE_KINDS,
        unexpected_kinds=() if unexpected_ok else ('UNEXPECTED',),
        **kwargs)


def main():
    parser = ArgumentParser()
    parser.add_argument('file', nargs='?', default='-')
    parser.add_argument('-w', '--include-whitespace', default=False, action='store_true',
        help="Show whitespace tokens")
    parser.add_argument('--id', default=False, action='store_true',
        help="Identity transformation: ideally leaves input unchanged")
    parser.add_argument('--unexpected-ok', default=False, action='store_true',
        help="Don't error on unexpected tokens")
    args = parser.parse_args()

    if args.file == '-':
        code = sys.stdin.read()
    else:
        code = open(args.file, 'r').read()

    tokens = lex(code)
    if args.id:
        for token in tokens:
            sys.stdout.write(token.value)
    else:
        print_c_tokens(tokens,
            include_whitespace=args.include_whitespace,
            unexpected_ok=args.unexpected_ok)


if __name__ == '__main__':
    main()
