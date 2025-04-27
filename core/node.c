#include "node.h"

#include <stdlib.h>


Node* create_node(){
    Node* node = calloc(1, sizeof(Node));
    return node;
}
void add_node_child(Node* parent, Node* new_child){

}
void free_node(Node* node){

}

/*
typedef struct Node {
    enum NodeType node_type;
    enum NodeValueType value_type;

    char* key_name;
    union {
        char* string_value;
        double number_value;
        int bool_value;
    } union_value;

    struct Node* parent;
    struct Node** children_nodes;
    size_t children_count;
    size_t children_capacity;

    struct NodeAttributes* attributes;
} Node;
*/
