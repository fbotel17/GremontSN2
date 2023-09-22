cmake_minimum_required(VERSION 3.5)

project(structureMoodle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(structureMoodle main.cpp
    functions.cpp
    functions.h)

include(GNUInstallDirs)
install(TARGETS structureMoodle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
