#include "fact/factorial.h"

namespace fact {

    int32_t factorial(const int32_t n) {
        if (n == 0) {
            return 1;
        }

        return n * factorial(n - 1);
    }

} // namespace fact
