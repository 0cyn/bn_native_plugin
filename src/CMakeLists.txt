# static library

# glob all the source files
file(GLOB_RECURSE SOURCES "*.cpp" "*.h")

# include ../binaryninja-api folder
include_directories(${CMAKE_SOURCE_DIR}/binaryninja-api)
add_library(${PROJECT_NAME} STATIC ${SOURCES})