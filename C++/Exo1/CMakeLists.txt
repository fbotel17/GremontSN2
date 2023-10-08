cmake_minimum_required(VERSION 3.5)

project(Exo1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exo1 main.cpp
    point
    point.h point.cpp
    pointFunction.cpp
    pointFunction.h)

include(GNUInstallDirs)
install(TARGETS Exo1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
