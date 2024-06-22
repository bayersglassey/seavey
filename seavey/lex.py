import re
import sys
from argparse import ArgumentParser
from typing import Iterable

from seavey.sourcefile import SourceFile, LogicalLine
from seavey.tokenize import Token, make_token_regex, tokenize, print_tokens


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

NEWLINE = 'NEWLINE'
WHITESPACE = 'WHITESPACE'
LINE_COMMENT = 'LINE_COMMENT'
MULTI_COMMENT = 'MULTI_COMMENT'
MULTI_COMMENT_CONTINUATION = 'MULTI_COMMENT_CONTINUATION'
IDENTIFIER = 'IDENTIFIER'
CONSTANT = 'CONSTANT'
STRING_LITERAL = 'STRING_LITERAL'
OPERATOR = 'OPERATOR'
PP_HASH = 'PP_HASH'
PP_HASHPAIR = 'PP_HASHPAIR'
UNEXPECTED = 'UNEXPECTED'

WHITESPACE_KINDS = (NEWLINE, WHITESPACE)

TOKEN_DESCRIPTIONS = (
    ###############################################################
    # Whitespace
    (NEWLINE, r'\n'),
    (WHITESPACE, r'[ \t\v\f]+'),
    (LINE_COMMENT, r'//[^\n]*'),
    (MULTI_COMMENT, r'/\*.*?(\*/|\n)'),

    ###############################################################
    # Language elements
    (IDENTIFIER, rf'{L}{LD}*'),
    (CONSTANT, '|'.join((
        rf'0[xX]{H}+{IS}*',
        rf'{D}+{IS}*',
        r"L?'(?:[^']|\\.)+'",
        rf'{D}+{E}{FS}?',
        rf'{D}*\.{D}+(?:{E})?{FS}?',
        rf'{D}+\.{D}*(?:{E})?{FS}?',
    ))),
    (STRING_LITERAL, r'L?"(?:[^"]|\\.)*"'),
    (OPERATOR, '|'.join(re.escape(op) for op in OPERATORS)),

    ###############################################################
    # Preprocessor
    (PP_HASH, r'#'),
    (PP_HASHPAIR, r'##'),

    ###############################################################
    # Other
    (UNEXPECTED, r'.'),
)


TOKEN_REGEX = make_token_regex(TOKEN_DESCRIPTIONS)

MULTI_COMMENT_END_REGEX = re.compile(r'.*\*/')


def lex(lines: Iterable[LogicalLine]) -> Iterable[Token]:
    multi_comment_token = False
    for line in lines:
        start = 0
        if multi_comment_token:
            match = MULTI_COMMENT_END_REGEX.search(line.text)
            if not match:
                # This whole line is inside a multi-line comment!..
                yield Token(
                    line=line,
                    kind='MULTI_COMMENT_CONTINUATION',
                    value=line.text,
                    pos=0,
                )
                continue
            start = match.end()
            multi_comment_token = None
        tokens = list(tokenize(line, TOKEN_REGEX, start))
        if tokens and tokens[-1].kind == 'MULTI_COMMENT':
            multi_comment_token = tokens[-1]
        yield from tokens
    if multi_comment_token:
        multi_comment_token.unexpected("Unterminated multi-line comment")


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

    file = SourceFile.load(args.file)
    tokens = lex(file.lines)
    if args.id:
        for token in tokens:
            sys.stdout.write(token.value)
    else:
        print_c_tokens(tokens,
            include_whitespace=args.include_whitespace,
            unexpected_ok=args.unexpected_ok)


if __name__ == '__main__':
    main()
