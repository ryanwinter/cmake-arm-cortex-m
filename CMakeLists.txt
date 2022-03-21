cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(CMAKE_C_STANDARD 99)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

include(target_link)

project(cmake_arm_cortx_example C CXX ASM)

add_subdirectory(src)
add_subdirectory(lib)
