cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*.h)

add_executable(clang-blueprint ${SOURCE_FILES} ${INCLUDE_FILES})
