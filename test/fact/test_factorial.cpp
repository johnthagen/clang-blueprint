#include "catch2/catch.hpp"

#include "fact/factorial.h"

TEST_CASE("Factorials computed", "[factorial]") {
    REQUIRE(fact::factorial(1) == 1);
    REQUIRE(fact::factorial(2) == 2);
    REQUIRE(fact::factorial(3) == 6);
    REQUIRE(fact::factorial(10) == 3628800);
}

int danger_function(int argc) {
    int* array = new int[100];
    delete[] array;
    return array[argc];  // BOOM
}

TEST_CASE("Intentional AddressSanitizer bug", "[danger]") {
    int a = danger_function(3);

    REQUIRE(a == 0);
}