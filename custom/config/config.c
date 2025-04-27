#include "../config.h"

#if BUILD_WITH_INI_CONFIG
    #include "config_ini_wrapper.h"
#endif


AllConfig config_global;


void set_fconfig(FormatConfig fconfig){
    config_global.fconfig = fconfig;
}
FormatConfig get_fconfig_copy(){
    return config_global.fconfig;
}
const FormatConfig* get_fconfig_link(){
    return &config_global.fconfig;
}

void set_bconfig(BehaviourConfig bconfig){
    config_global.bconfig = bconfig;
}
BehaviourConfig get_bconfig_copy(){
    return config_global.bconfig;
}
const BehaviourConfig* get_bconfig_link(){
    return &config_global.bconfig;
}

void set_lconfig(LogConfig lconfig){
    config_global.lconfig = lconfig;
}
LogConfig get_lconfig_copy(){
    return config_global.lconfig;
}
const LogConfig* get_lconfig_link(){
    return &config_global.lconfig;
}

void set_config(AllConfig config){
    config_global = config;
}
AllConfig get_config_copy(){
    return config_global;
}
const AllConfig* get_config_link(){
    return &config_global;
}

#if BUILD_WITH_INI_CONFIG
int load_config_from_ini(char* file_path){
    AllConfig config = create_config_default();
    int result = parse_ini_config_file(file_path, &config);
    if (result == 1)
        config_global = config;
    return result;
}
#endif
