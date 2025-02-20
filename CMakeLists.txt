cmake_minimum_required(VERSION 3.16)

project(ParserLowLevelLib LANGUAGES C)

add_executable(ParserLowLevel main.c)

include(GNUInstallDirs)
install(TARGETS ParserLowLevel
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
