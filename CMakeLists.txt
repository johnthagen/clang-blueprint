cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(clang-blueprint src/main.cpp src/fact/factorial.cpp include/fact/factorial.h)
