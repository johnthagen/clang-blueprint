find_program(CLANG_TIDY clang-tidy)
# Ubuntu 18.04 installs clang-tidy as clang-tidy-6.0.
if (NOT CLANG_TIDY)
    find_program(CLANG_TIDY clang-tidy-6.0)
endif()

if (CLANG_TIDY)
    add_custom_target(
            clang-tidy
            COMMAND ${CLANG_TIDY}
            ${SOURCE_FILES}
            --
            -std=c++11
            -I ${PROJECT_SOURCE_DIR}/include
    )
endif ()
