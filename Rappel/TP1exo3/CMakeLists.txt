cmake_minimum_required(VERSION 3.5)

project(TP1exo3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TP1exo3 main.cpp
    functions.cpp
    functions.h)

include(GNUInstallDirs)
install(TARGETS TP1exo3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
