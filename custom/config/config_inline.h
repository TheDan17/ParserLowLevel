#ifndef CUSTOM_CONFIG_INLINE_H
#define CUSTOM_CONFIG_INLINE_H

#include "../config.h"

#include <stdlib.h>
#include <stdbool.h>


#define pretty_print_symbol_default ' '
#define pretty_print_symbol_amount_default 4

#define is_null_allow_default true
#define is_parse_strict_default false
#define is_parse_attribute_default true

#define log_type_default LOG_STDOUT
#define is_current_path_default false
#define log_file_path_default NULL
#define log_name_format_default NULL


static inline FormatConfig create_fconfig_default() {
    FormatConfig fconfig = {pretty_print_symbol_default,
                            pretty_print_symbol_amount_default};
    return fconfig;
}

static inline BehaviourConfig create_bconfig_default() {
    BehaviourConfig bconfig = {is_null_allow_default,
                               is_parse_strict_default,
                               is_parse_attribute_default};
    return bconfig;
}

static inline LogConfig create_lconfig_default() {
    LogConfig lconfig = {log_type_default,
                         is_current_path_default,
                         log_file_path_default,
                         log_name_format_default};
    return lconfig;
}

static inline AllConfig create_config_default() {
    AllConfig config = {create_fconfig_default(),
                        create_bconfig_default(),
                        create_lconfig_default()};
    return config;
}

#endif // CUSTOM_CONFIG_INLINE_H
