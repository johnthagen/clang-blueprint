/// \file

#include <cstdint>
#include <cstdlib>
#include <iostream>

#include "fact/factorial.h"

/// A memory unsafety bug designed to be detected by Cppcheck.
/// \warning This code has an intentional bug and should not be used as an example.
void bad_cppcheck_example() {
    char a[2] = {};

    std::cout << a[3];
}

/// Program entry point.
int32_t main(const int32_t argc, const char* argv[]) {
    const int32_t n = 7;
    const int32_t result = fact::factorial(n);

    std::cout << "Hello, World! factorial(" << n << ") = " << result << std::endl;
    return EXIT_SUCCESS;
}
