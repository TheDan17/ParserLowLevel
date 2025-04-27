cmake_minimum_required(VERSION 3.16)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(parserialize-lib LANGUAGES C)
project(parserialize-tester LANGUAGES C)

add_executable(parserialize-lib
    main.c

    api/basic.h

    core/node.h
    core/node.c
    core/node_value.h
    core/node_value.c

    parse/lexer_tokens.h
    parse/lexer_main.h
    parse/lexer_main.c

    custom/build.h
    custom/override.h
    custom/custom.h
    custom/config.h

    custom/config/config.c
    custom/config/config_inline.h
    custom/config/config_ini_wrapper.h
    custom/config/config_ini_wrapper.c

    extern/ini.h
    extern/ini.c
    parse/lexer_yaml.h
)
add_executable(parserialize-cli-tester
    test-util/main.c
)

include(GNUInstallDirs)
install(TARGETS parserialize-lib parserialize-cli-tester
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
