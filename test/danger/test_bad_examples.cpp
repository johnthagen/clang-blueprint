#include <cstdint>

#include "catch2/catch.hpp"

int danger_use_after_free_function(const int32_t index) {
    int32_t* array = new int32_t[100];
    delete[] array;
    return array[index];
}

TEST_CASE("Intentional AddressSanitizer bug", "[danger]") {
    danger_use_after_free_function(3);
}
