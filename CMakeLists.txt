cmake_minimum_required(VERSION 3.2)
project(clang-blueprint)

# Require C++11.
# Change this value to require other C++ standards (14, 17, etc.)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

include_directories(include)

# Use globbing to find source files.
# Any source files added to include/ or src/ will automatically be added to the project.
file(GLOB_RECURSE INCLUDE_FILES ${CMAKE_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE SOURCE_FILES_NO_MAIN ${CMAKE_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM SOURCE_FILES_NO_MAIN ${CMAKE_SOURCE_DIR}/src/main.cpp)
set(SOURCE_FILES ${SOURCE_FILES_NO_MAIN} ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(clang-blueprint ${INCLUDE_FILES} ${SOURCE_FILES_NO_MAIN} ${SOURCE_FILES})

# If external libraries are needed, use find_library() and target_link_libraries()
# to dynamically link them to your executable. Generally, you'll want to install
# them onto the host using your OS's package manager.
# Example:
#   find_library(LIB_FMT fmt)
#   target_link_libraries(clang-blueprint ${LIB_FMT})

# Include extra CMake files that are used for testing and linting.
include(${CMAKE_SOURCE_DIR}/cmake/unit_test.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/clang_tools.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/cppcheck.cmake)

# Enable all warnings except for no-sign-compare, which Clang disables
# by default.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-sign-compare")

option(WERROR "Turn warnings into errors" OFF)
if (WERROR)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
endif ()
