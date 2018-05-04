cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/main.cpp)

add_executable(clang-blueprint ${INCLUDE_FILES} ${SOURCE_FILES_NO_MAIN} ${PROJECT_SOURCE_DIR}/src/main.cpp)

include(${PROJECT_SOURCE_DIR}/cmake/unit_test.cmake)
