cmake_minimum_required(VERSION 4.0.0)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
# set(CMAKE_CXX_COMPILER /usr/bin/clang++)

# Use LLVM standard library
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
set(CMAKE_CXX_MODULE_STD 1)

project(
    cpp_modules_cmakeproject
    VERSION 2.1
    LANGUAGES CXX)

add_library(custom)

target_sources(custom  PUBLIC  FILE_SET CXX_MODULES FILES   modules/custom.cppm)

add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE custom)
