
cmake_minimum_required(VERSION 3.20)
project(Flyweight_2_1)

set(CMAKE_CXX_STANDARD 17)


file(GLOB_RECURSE SOURCES src/*.cpp)

message("SOURCES = ${SOURCES}")

find_package(Boost REQUIRED date_time)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE inc)
