cmake_minimum_required(VERSION 3.17)

file(GLOB SOURCE_FILES lib/*.cpp)

add_executable(${PROJECT_NAME}_ej_template_with_lib_files main.cpp ${SOURCE_FILES})