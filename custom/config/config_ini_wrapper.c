#include "config_ini_wrapper.h"

#include <stdlib.h>
#include <string.h>

#define MATCH_SN(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0
#define MATCH_S(s) strcmp(section, s)
#define MATCH_N(n) strcmp(name, n)

#define elif(cond) else if(cond)


static int parse_handler(void* data, const char* section,
                         const char* name, const char* value) {
    AllConfig* config = (AllConfig*)data;
    if (MATCH_S("FormatConfig")) {
        if (MATCH_N("pretty_print_symbol")) {
            config->fconfig.pretty_print_symbol = value[0];
        } elif (MATCH_N("pretty_print_symbol_amount")) {
            config->fconfig.pretty_print_symbol_amount = atoi(value);
        }
    }
    if (MATCH_S("BehaviourConfig")) {
        if (MATCH_N("is_null_allow")) {
            config->bconfig.is_null_allow = atoi(value);
        } elif (MATCH_N("is_parse_strict")) {
            config->bconfig.is_parse_strict = atoi(value);
        } elif (MATCH_N("is_parse_attribute")) {
            config->bconfig.is_parse_attribute = atoi(value);
        }
    }
    if (MATCH_S("LogConfig")) {
        if (MATCH_N("log_type")) {
            config->lconfig.log_type = atoi(value);
        } elif (MATCH_N("is_current_path")) {
            config->lconfig.is_current_path = atoi(value);
        } elif (MATCH_N("log_file_path")) {
            config->lconfig.log_file_path = strdup(value);
        } elif (MATCH_N("log_name_format")) {
            config->lconfig.log_name_format = strdup(value);
        }
    }
    return 1;
}

int parse_ini_config_file(char* file_path, AllConfig* config){
    return ini_parse(file_path, parse_handler, config);
}
