/// \file

#include <cstdint>
#include <cstdlib>
#include <iostream>

#include "fact/factorial.h"

/// Program entry point.
int32_t main(const int32_t argc, const char* argv[]) {
    const int32_t n = 7;
    const int32_t result = fact::factorial(n);

    std::cout << "Hello, World! factorial(" << n << ") = " << result << std::endl;
    return EXIT_SUCCESS;
}
