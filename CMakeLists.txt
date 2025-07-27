cmake_minimum_required(VERSION 3.25)
project(
    cpp23_modules_cmakeproject
    VERSION 1.0.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_COMPILER g++)

execute_process(
    COMMAND ${CMAKE_SOURCE_DIR}/find_std_module.sh
    OUTPUT_VARIABLE STD_MODULE_SOURCE
    RESULT_VARIABLE FIND_RESULT
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

if(NOT FIND_RESULT EQUAL 0)
    message(FATAL_ERROR "The std.cc search script failed with an error. Exit code: ${SCRIPT_EXIT_CODE}")
endif()

if(NOT EXISTS ${STD_MODULE_SOURCE})
    message(FATAL_ERROR "std.cc not found at ${STD_MODULE_SOURCE}.")
endif()

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/std.o
    COMMAND ${CMAKE_CXX_COMPILER} -std=c++23 -fmodules -fsearch-include-path ${STD_MODULE_SOURCE} -c -o ${CMAKE_CURRENT_BINARY_DIR}/std.o
    DEPENDS ${STD_MODULE_SOURCE}
    COMMENT "Compiling std module from ${STD_MODULE_SOURCE}"
    VERBATIM
)

add_custom_target(compile_std_module DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/std.o)

add_executable(main src/main.cpp)
add_dependencies(main compile_std_module)

target_compile_options(main PRIVATE -std=c++23 -fmodules)

target_link_libraries(main ${CMAKE_CURRENT_BINARY_DIR}/std.o)
