cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(CMAKE_C_STANDARD 99)

list(APPEND CMAKE_MODULE_PATH cmake)

#include(utilities)

project(cmake_arm_cortx_example C CXX ASM)

add_subdirectory(app)
add_subdirectory(lib)
