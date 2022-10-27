cmake_minimum_required(VERSION 3.1)
project(hypot)

find_package(sqrt REQUIRED)

set(CMAKE_CXX_STANDARD 11)

add_executable(hypot main.cpp)
target_link_libraries(hypot sqrt::sqrt)

