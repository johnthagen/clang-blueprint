/// \file
/// \brief File that contains known bugs to demonstrate analyzer behavior.

#include <iostream>

namespace danger {

/// A memory unsafety bug designed to be detected by Cppcheck.
/// \warning This code has an intentional bug and should not be used as an example.
void bad_cppcheck_example() {
    char a[2] = {};

    std::cout << a[3];
}

} // namespace danger
