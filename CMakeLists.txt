cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Root LANGUAGES C CXX)

add_library(types-descriptions INTERFACE)

    target_include_directories(types-descriptions INTERFACE includes)
    set_target_properties(types-descriptions PROPERTIES CXX_STANDARD 20)

add_subdirectory(examples)