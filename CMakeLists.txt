cmake_minimum_required(VERSION 3.17)
project(rage_code)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/incl)
file(GLOB_RECURSE SRC src/*cpp)

add_executable(${PROJECT_NAME} ${SRC})