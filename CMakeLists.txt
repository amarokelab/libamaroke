cmake_minimum_required(VERSION 3.22)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(amaroke VERSION 0.1.0)

add_executable(ama main.c)
add_library(amaroke STATIC lib/amaroke.c)
target_link_libraries(ama amaroke)
