#include <cstdlib>
#include <cstdint>
#include <iostream>

#include "fact/factorial.h"

int32_t main() {
    const int32_t n = 7;
    const int32_t result = fact::factorial(n);

    std::cout << "Hello, World! factorial(" << n << ") = " << result ;
    return EXIT_SUCCESS;
}
