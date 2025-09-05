import re


# NOTE: we can probably steal libcpp's test suite!
# https://github.com/gcc-mirror/gcc/tree/master/gcc/testsuite/c-c%2B%2B-common/cpp


MULTILINE_COMMENT_START_REGEX = re.compile(r'/\*([^*]|\*[^/])*\n')
MULTILINE_COMMENT_END_REGEX = re.compile(r'^.*?\*/')


# https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
# 6.4.6 Punctuators
PUNCTUATORS = """
    [ ] ( ) { } . ->
    ++ -- & * + - ~ !
    / % << >> < > <= >= == != ^ | && ||
    ? : ; ...
    = *= /= %= += -= <<= >>= &= ^= |=
    , # ##
    <: :> <% %> %: %:%:
""".split()


# https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
# A.1.2 Keywords
KEYWORDS = """
    auto break case char const continue
    default do double else enum extern float for
    goto if inline int long register restrict return
    short signed sizeof static struct switch typedef union
    unsigned void volatile while _Bool _Complex _Imaginary
""".split()


# https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
# A.1.3 Identifiers
# A.1.4 Universal character names
HEX_DIGIT = r'[a-fA-F0-9]'
UNIVERSAL_CHARACTER_NAME = rf'\\u{HEX_DIGIT}{{4}}|\\U{HEX_DIGIT}{{8}}'
IDENTIFIER_NONDIGIT = rf'[a-zA-Z_]|{UNIVERSAL_CHARACTER_NAME}'
IDENTIFIER_REGEX = re.compile(rf'(?:{IDENTIFIER_NONDIGIT})(?:{IDENTIFIER_NONDIGIT}|[0-9])*')

# Sanity check!
assert IDENTIFIER_REGEX.findall(r'x +y+ 1x1 _hello_ X\uffffY\U0000FFFFZ') == \
    ['x', 'y', 'x1', '_hello_', 'X\\uffffY\\U0000FFFFZ']


# https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
# A.1.9 Preprocessing numbers
PP_NUMBER_REGEX = re.compile(r'(?:[0-9]|\.[0-9])(?:[0-9.]|[eEpP][+-]|{IDENTIFIER_NONDIGIT})*')

# Sanity check!
assert PP_NUMBER_REGEX.findall(r'1Ex 1E1') == \
    ['1Ex', '1E1']


/*
https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
6.4 Lexical elements:

    token:
        keyword
        identifier
        constant
        string-literal
        punctuator

    preprocessing-token:
        header-name
        identifier
        pp-number
        character-constant
        string-literal
        punctuator
        each non-white-space character that cannot be one of the above

A preprocessing token is the minimal lexical element of the language in translation
phases 3 through 6.


The categories of preprocessing tokens are: header names,
identifiers, preprocessing numbers, character constants, string literals, punctuators, and
single non-white-space characters that do not lexically match the other preprocessing
token categories.58) If a ' or a " character matches the last category, the behavior is
undefined. Preprocessing tokens can be separated by white space; this consists of
comments (described later), or white-space characters (space, horizontal tab, new-line,
vertical tab, and form-feed), or both. As described in 6.10, in certain circumstances
during translation phase 4, white space (or the absence thereof) serves as more than
preprocessing token separation. White space may appear within a preprocessing token
only as part of a header name or between the quotation characters in a character constant
or string literal.

If the input stream has been parsed into preprocessing tokens up to a given character, the
next preprocessing token is the longest sequence of characters that could constitute a
preprocessing token. There is one exception to this rule: header name preprocessing
tokens are recognized only within #include preprocessing directives and in
implementation-defined locations within #pragma directives. In such contexts, a
sequence of characters that could be either a header name or a string literal is recognized
as the former.

EXAMPLE 1 The program fragment 1Ex is parsed as a preprocessing number token (one that is not a
valid floating or integer constant token), even though a parse as the pair of preprocessing tokens 1 and Ex
might produce a valid expression (for example, if Ex were a macro defined as +1). Similarly, the program
fragment 1E1 is parsed as a preprocessing number (one that is a valid floating constant token), whether or
not E is a macro name.

EXAMPLE 2 The program fragment x+++++y is parsed as x ++ ++ + y, which violates a constraint on
increment operators, even though the parse x ++ + ++ y might yield a correct expression.

keyword: one of
    auto
    break
    case
    char
    const
    continue
    default
    do
    double
    else
    enum
    extern
    float
    for
    goto
    if
    inline
    int
    long
    register
    restrict
    return
    short
    signed
    sizeof
    static
    struct
    switch
    typedef
    union
    unsigned
    void
    volatile
    while
    _Bool
    _Complex
    _Imaginary

*/
