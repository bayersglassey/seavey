import sys
from typing import List, Iterable, NamedTuple
from argparse import ArgumentParser

from seavey.sourcefile import SourceFile, LogicalLine
from seavey.tokenize import make_token_regex, tokenize, Token


BNF_TOKEN_DESCRIPTIONS = (
    # Whitespace
    ('WHITESPACE', r'\s+'),
    ('COMMENT', r'#[^\n]*'),

    # BNF elements
    ('RULE', r'[a-z_][a-z_0-9]*'),
    ('TERMINAL', r'[A-Z_][A-Z_0-9]*'),
    ('LITERAL', r"'[^']+'"),
    ('OPERATOR', r'[:;|]'),

    # Other
    ('UNEXPECTED', r'.'),
)


BNF_TOKEN_REGEX = make_token_regex(BNF_TOKEN_DESCRIPTIONS)


def bnf_lex(lines: Iterable[LogicalLine]) -> Iterable[Token]:
    for line in lines:
        yield from tokenize(line, BNF_TOKEN_REGEX)


class BNFCase(NamedTuple):
    tokens: List[Token]


class BNFRule(NamedTuple):
    name: str
    cases: List[BNFCase]


def bnf_parse(tokens: Iterable[Token]):
    rule = None
    case = None
    for token in tokens:
        if token.value == ';':
            if not rule:
                token.unexpected("No rule")
            if not rule.cases:
                token.unexpected("No cases: {rule!r}")
            yield rule
            rule = None
            case = None
        elif token.value in ':|':
            if not rule:
                token.unexpected("No rule")
            case = BNFCase(tokens=[])
            rule.cases.append(case)
        elif token.kind in ('RULE', 'TERMINAL', 'LITERAL'):
            if rule is None:
                token.expect('RULE')
                rule = BNFRule(name=token.value, cases=[])
            else:
                if not case:
                    token.unexpected("No case")
                case.tokens.append(token)
        elif token.kind in ('WHITESPACE', 'COMMENT'):
            pass
        else:
            token.unexpected()
    if rule:
        token.expect(';')


def print_rules(rules: Iterable[BNFRule]):
    for rule in rules:
        print(f"{rule.name}:")
        for case in rule.cases:
            print(f"    {' '.join(t.value for t in case.tokens)}")


def main():
    parser = ArgumentParser()
    parser.add_argument('file', nargs='?', default='-')
    args = parser.parse_args()

    if args.file == '-':
        code = sys.stdin.read()
    else:
        code = open(args.file, 'r').read()

    file = SourceFile.load(args.file)
    tokens = bnf_lex(file.lines)
    rules = bnf_parse(tokens)
    print_rules(rules)


if __name__ == '__main__':
    main()
