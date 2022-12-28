cmake_minimum_required(VERSION 3.20)
project(Singleton)

set(CMAKE_CXX_STANDARD 17)

message("CMAKE_SOURCE_DIR         = ${CMAKE_SOURCE_DIR}")
message("PROJECT_SOURCE_DIR       = ${PROJECT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")

include_directories("${PROJECT_SOURCE_DIR}/inc")

file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE INCLUDES ${PROJECT_SOURCE_DIR}/inc/*.h)

message("SOURCES                  = ${SOURCES}")
message("INCLUDES                 = ${INCLUDES}")

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})
