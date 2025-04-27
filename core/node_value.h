#ifndef NODE_VALUE_H
#define NODE_VALUE_H

#include "stdbool.h"


typedef enum { VALUE_STRING,
               VALUE_NUMBER,
               VALUE_BOOL,
               VALUE_NULL
} NodeValueType;

typedef struct {
    NodeValueType type;
    union {
        char* string;
        double number;
        int boolean;
    };
    bool is_null;
    bool is_empty;
} NodeValue;

static inline NodeValue make_value_empty();
static inline NodeValue make_value_null();
static inline NodeValue make_value_str(char* str);
static inline NodeValue make_value_num(double num);
static inline NodeValue make_value_bool(bool is);


#endif // NODE_VALUE_H
