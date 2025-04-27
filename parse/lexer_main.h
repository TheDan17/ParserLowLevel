#ifndef LEXER_MAIN_H
#define LEXER_MAIN_H

#include "lexer_tokens.h"


LexerToken* tokenize_file(char* file_path);
LexerToken* tokenize_str(char* str);


#endif // LEXER_MAIN_H
