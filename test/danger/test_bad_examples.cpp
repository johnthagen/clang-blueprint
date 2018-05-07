#include "catch2/catch.hpp"

int danger_use_after_free_function(int argc) {
    int* array = new int[100];
    delete[] array;
    return array[argc];
}

TEST_CASE("Intentional AddressSanitizer bug", "[danger]") {
    int a = danger_use_after_free_function(3);

    REQUIRE(a == 0);
}
