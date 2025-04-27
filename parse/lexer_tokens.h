#ifndef LEXER_TOKENS_H
#define LEXER_TOKENS_H


enum LexerTokenType {
    TOKEN_LEFT_FIGURE_BRACE, // '{'
    TOKEN_RIGHT_FIGURE_BRACE, // '}'
    TOKEN_LEFT_SQUARE_BRACE, // '['
    TOKEN_RIGHT_SQUARE_BRACE, // ']'
    TOKEN_COLON, // ':'
    TOKEN_COMMA, // ','
    TOKEN_STRING, // '"word"'
    TOKEN_NUMBER, // '0.0'
    TOKEN_BOOL, // 'true/false'
    TOKEN_NULL, // 'NULL'
    TOKEN_TAG_LEFT_BRACE, // '<' always FIRST pair tag
    TOKEN_TAG_RIGHT_BRACE, // '>' FIRST and SECOND tag
    TOKEN_TAG_LEFT_CLOSE_BRACE, // '</' always SECOND tag
    TOKEN_TAG_RIGHT_CLOSE_BRACE, // '/>' always OPEN tag
    TOKEN_VALUE, // 'value'
    TOKEN_EQUAL, // '='
    TOKEN_TILDA, // '~'
    TOKEN_AT_SIGN, // '@'
    TOKEN_EOF,
    TOKEN_UNKNOWN
};

typedef struct {
    LexerTokenType type;
    char* value;
} LexerToken;


#endif // LEXER_TOKENS_H
