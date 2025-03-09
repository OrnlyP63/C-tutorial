# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(AreaCalculator C)

set(SOURCE_FILE area_code.c area_lib.c area_lib.h)
# Add the source files to the project
add_executable(area_program ${SOURCE_FILE})