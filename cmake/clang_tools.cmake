find_program(CLANG_TIDY clang-tidy)
# Ubuntu 18.04 installs clang-tidy as clang-tidy-6.0.
if (NOT CLANG_TIDY)
    find_program(CLANG_TIDY clang-tidy-6.0)
endif ()

if (CLANG_TIDY)
    add_custom_target(
            clang-tidy
            COMMAND ${CLANG_TIDY}
            ${SOURCE_FILES}
            --
            -std=c++11
            -I ${CMAKE_SOURCE_DIR}/include
    )
endif ()

find_program(CLANG_FORMAT clang-format)
# Ubuntu 18.04 installs clang-format as clang-format-6.0.
if (NOT CLANG_FORMAT)
    find_program(CLANG_FORMAT clang-format-6.0)
endif ()

if (CLANG_FORMAT)
    add_custom_target(
            clang-format
            COMMAND ${CLANG_FORMAT}
            -i
            ${SOURCE_FILES} ${TEST_SOURCE_FILES}
    )
endif ()

option(ADDRESS_SANITIZER "Enable Clang AddresSanitizer" OFF)
if (ADDRESS_SANITIZER)
    message(STATUS "AddressSanitizer enabled for debug build")
    set(CMAKE_CXX_FLAGS_DEBUG
        "${CMAKE_CXX_FLAGS_DEBUG} -O1 -fno-omit-frame-pointer -fsanitize=address")
endif ()