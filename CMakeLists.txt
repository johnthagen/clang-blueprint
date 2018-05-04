cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB_RECURSE INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/main.cpp)
file(GLOB_RECURSE TEST_SOURCE_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)

add_executable(clang-blueprint ${INCLUDE_FILES} ${SOURCE_FILES_NO_MAIN} ${PROJECT_SOURCE_DIR}/src/main.cpp)
add_executable(unit-test ${INCLUDE_FILES} ${SOURCE_FILES_NO_MAIN} ${TEST_SOURCE_FILES})
