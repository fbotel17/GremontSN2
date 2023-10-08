cmake_minimum_required(VERSION 3.5)

project(ExoLIFO LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ExoLIFO main.cpp
    pile_entier.h pile_entier.cpp

)

include(GNUInstallDirs)
install(TARGETS ExoLIFO
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
