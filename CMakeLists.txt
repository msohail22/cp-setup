cmake_minimum_required(VERSION 3.10)
project(CP_Workspace CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable common warnings and compiler optimization for performance testing
add_compile_options(-Wall -Wextra -O2)

# Automatically find all C++ source files in the workspace directory
file(GLOB SOURCES "*.cpp")

foreach(SOURCE_FILE ${SOURCES})
    # Extract the name without extension (e.g. "yo" from "yo.cpp")
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)
    # Define an executable target for this file
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
endforeach()
