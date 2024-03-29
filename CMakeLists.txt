cmake_minimum_required(VERSION 3.24)
execute_process(COMMAND python3 ${CMAKE_SOURCE_DIR}/project.py --get-project-name OUTPUT_VARIABLE PROJECT_NAME)
string(STRIP ${PROJECT_NAME} PROJECT_NAME)

if(NOT PROJECT_NAME)
    message(FATAL_ERROR "Set Project Name via project.py --setup")
    return()
endif()

project(${PROJECT_NAME})
# Add src subidrectory as a static library to the project
add_subdirectory(src)

set(CMAKE_CXX_STANDARD 17)

