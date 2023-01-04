
cmake_minimum_required(VERSION 3.20)
project(Adapter_3_1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(customs)

file(GLOB_RECURSE SOURCES src/*.cpp)

message("SOURCES = ${SOURCES}")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE customs)
target_include_directories(${PROJECT_NAME} PRIVATE inc)
