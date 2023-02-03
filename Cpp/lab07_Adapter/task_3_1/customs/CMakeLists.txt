
cmake_minimum_required(VERSION 3.20)
project(customs)

set(CMAKE_CXX_STANDARD 17)


file(GLOB_RECURSE LIB_SOURCES src/*.cpp)
file(GLOB_RECURSE LIB_INCLUDES inc/*.hpp)

message("LIB_SOURCES = ${LIB_SOURCES}")
message("LIB_INCLUDES = ${LIB_INCLUDES}")

add_library(${PROJECT_NAME} SHARED ${LIB_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC inc)
