add_executable(main main.cpp)

target_link_libraries(main PRIVATE modules)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/config.hpp.in"
    "${CMAKE_CURRENT_BINARY_DIR}/config.hpp"
)

target_include_directories(main PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
