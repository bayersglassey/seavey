import re


LEXER_REGEX = re.compile(rb"""
    //[^\n]*                        # Single-line comment
    | /\*.*?\*/                     # Multi-line comment
    | \#\S*\w+                      # Preprocessor directives
    | "(?:[^"]|\\.)*"               # String literals
    | '[^']|\\.'                    # Char literals
    | [\d]+                         # Int literals
    | 0x[\d]+                       # Hex literals
    | [a-zA-Z_][a-zA-Z0-9_]*        # Identifiers
    | [()\[\];.]                    # Special characers
    | (?:->|\+=|\*=|-=|/=|%=|~=)    # Operators
    | (?:==|!=|<|>|<=|>=)           # Operators
    | (?:\+|-|\*|!|~|\^|%|/)         # Operators
""", re.M | re.S | re.X)


def clex(data):
    return LEXER_REGEX.finditer(data)
