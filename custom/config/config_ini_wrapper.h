#ifndef CONFIG_INI_WRAPPER_H
#define CONFIG_INI_WRAPPER_H

#include "../config.h"
#include "../../extern/ini.h"

#include <stdbool.h>

int parse_ini_config_file(char* file_path, AllConfig* config);

#endif // CONFIG_INI_WRAPPER_H
