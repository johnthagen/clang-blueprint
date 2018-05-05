cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

# Require C++11.
# Change this value to require other C++ standards (14, 17, etc.)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

include_directories(include)

file(GLOB_RECURSE INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM SOURCE_FILES_NO_MAIN ${PROJECT_SOURCE_DIR}/src/main.cpp)
set(SOURCE_FILES ${SOURCE_FILES_NO_MAIN} ${PROJECT_SOURCE_DIR}/src/main.cpp)

add_executable(clang-blueprint ${INCLUDE_FILES} ${SOURCE_FILES_NO_MAIN} ${SOURCE_FILES})

# If external libraries are needed, use find_library() and target_link_libraries()
# to dynamically link them to your executable. Generally, you'll want to install
# them onto the host using your OS's package manager.
# Example:
#   find_library(LIB_FMT fmt)
#   target_link_libraries(clang-blueprint ${LIB_FMT})

include(${PROJECT_SOURCE_DIR}/cmake/unit_test.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/clang_tools.cmake)