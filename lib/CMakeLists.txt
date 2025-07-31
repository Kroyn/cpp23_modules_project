file(GLOB MODULES_LIST CONFIGURE_DEPENDS "*.cppm")

add_library(modules)

target_sources(modules PUBLIC FILE_SET CXX_MODULES FILES ${MODULES_LIST})
