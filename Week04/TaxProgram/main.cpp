#include <iostream>
#include <cmath>
using namespace std;

double calculateTax(double income, bool isMarried) {
    double tax = income;  // wrong, but it will compile...

    if (isMarried) {
        cout << "***MARRIED***" << endl;
    } else {
        cout << "***SINGLE***" << endl;
    }

    return tax;
}

// Bring in unit testing code and tell it to build a main function
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// The tests
TEST_CASE("calculateTax") {
  CHECK(calculateTax(5000, false) == doctest::Approx(500));
  CHECK(calculateTax(50000, false) == doctest::Approx(8000));
  CHECK(calculateTax(120000, true) == doctest::Approx(21500));
}