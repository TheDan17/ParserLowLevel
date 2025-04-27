#ifndef NODE_H
#define NODE_H

#include "node_value.h"

#include <stdlib.h>


typedef enum { NODE_UNKNOWN,
               NODE_OBJECT,
               NODE_ARRAY,
               NODE_VALUE,
               NODE_ATTRS,
               NODE_ERROR
} NodeType;

typedef struct NodeAttributes NodeAttributes;

typedef struct Node {
    NodeType node_type;

    char* key;
    NodeValue value;

    struct Node* parent;
    struct Node** children_nodes;
    size_t children_count;
    size_t children_capacity;

    NodeAttributes* attributes;
} Node;

const size_t NODE_CHILDREN_CAPACITY_STEP = 4;

struct NodeAttributes {
    struct Node** pairs;
    size_t attributes_count;
};

Node* create_node_default();
Node* create_node_value_null();
Node* create_node_value(char* key, NodeValue value);
Node* create_node_str(char* key, char* value);
Node* create_node_num(char* key, double num);
Node* create_node_bool(char* key, bool value);

void add_node_child(Node* parent, Node* new_child);
void add_node_attribute(NodeAttributes* attributes, Node* value_node);
void free_node(Node* node);
void free_node_unrecursive(Node* node);


#endif // NODE_H
