cmake_minimum_required(VERSION 3.5)

project(ExoReference LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ExoReference main.cpp
    functions.h
    functions.cpp)

include(GNUInstallDirs)
install(TARGETS ExoReference
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
