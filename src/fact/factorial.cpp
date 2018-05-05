/// \file
/// \brief Factorial functions.

#include "fact/factorial.h"

namespace fact {

/// Computes the factorial of `n` through a recursive algorithm.
int32_t factorial(const int32_t n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

}  // namespace fact
