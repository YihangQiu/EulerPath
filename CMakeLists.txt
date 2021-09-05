cmake_minimum_required (VERSION 3.16.3)

project (solution)

#Bring the headers, such as HelloWorld.h into the project
include_directories(include)

#However, the file(GLOB ...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#指定生成目标
add_executable(solution ${SOURCES})