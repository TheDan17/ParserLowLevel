#include "stdbool.h"

#include "../core/node.h"

#ifndef API_BASIC_H
#define API_BASIC_H

typedef enum ParseType {
    INPUT_JSON,
    INPUT_XML,
    INPUT_HTML,
    INPUT_YAML
} ParseType;

typedef enum SerializeType {
    OUTPUT_JSON,
    OUTPUT_XML,
    OUTPUT_HTML,
    OUTPUT_YAML
} SerializeType;

typedef enum NodeOutputType {
    PRINT_ONELINE,
    PRINT_PRETTY
} NodeOutputType;

Node* parse_tree_by_extension(char* file_path, bool parse_values);
Node* parse_tree(char* file_path, ParseType type, bool parse_values);
Node* parse_tree_str(char* str, ParseType type, bool parse_values);
bool serialize_tree(char* file_path, Node* tree, SerializeType type, NodeOutputType output_type);
char* serialize_tree_str(char* file_path, Node* tree, SerializeType type, NodeOutputType output_type);

#endif // API_BASIC_H
