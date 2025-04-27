#ifndef CUSTOM_CONFIG_H
#define CUSTOM_CONFIG_H

#include "build.h"

#include <stdbool.h>


typedef struct {
    char pretty_print_symbol;
    int pretty_print_symbol_amount;
} FormatConfig;

typedef struct {
    bool is_null_allow;
    bool is_parse_strict;
    bool is_parse_attribute;
} BehaviourConfig;

enum LoggingType {
    LOG_OFF,
    LOG_FILE,
    LOG_STDOUT
};
typedef struct {
    enum LoggingType log_type;
    bool is_current_path;
    char* log_file_path;
    char* log_name_format;
} LogConfig;

typedef struct {
    FormatConfig fconfig;
    BehaviourConfig bconfig;
    LogConfig lconfig;
} AllConfig;


// === FormatConfig ===
void set_fconfig(FormatConfig fconfig);
static inline FormatConfig create_fconfig_default();
FormatConfig get_fconfig_copy();
const FormatConfig* get_fconfig_link();

// === BehaviourConfig ===
void set_bconfig(BehaviourConfig bconfig);
static inline BehaviourConfig create_bconfig_default();
BehaviourConfig get_bconfig_copy();
const BehaviourConfig* get_bconfig_link();

// === LogConfig ===
void set_lconfig(LogConfig lconfig);
static inline LogConfig create_lconfig_default();
LogConfig get_lconfig_copy();
const LogConfig* get_lconfig_link();

// === AllConfig ===
void set_config(AllConfig config);
static inline AllConfig create_config_default();
AllConfig get_config_copy();
const AllConfig* get_config_link();


#if BUILD_WITH_INI_CONFIG
int load_config_from_ini(char* file_path);
#endif

#include "config/config_inline.h"


#endif // CUSTOM_CONFIG_H
