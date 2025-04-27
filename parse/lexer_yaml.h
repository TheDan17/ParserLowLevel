#ifndef LEXER_YAML_H
#define LEXER_YAML_H

#include "lexer_tokens.h"

#include <stdbool.h>


enum LexerTokenYamlType {
    TOKEN_INDENT,
    TOKEN_DEDENT
};

typedef struct LexerTokenYaml {
    bool is_common;
    enum LexerTokenType token_common;
    enum LexerTokenYamlType token_yaml;
    char* value;
} LexerTokenYaml;


LexerTokenYaml* tokenize_file_yaml(char* file_path);
LexerTokenYaml* tokenize_str_yaml(char* str);


#endif // LEXER_YAML_H
