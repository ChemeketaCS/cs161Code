// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include "calendarFunctions.h"

TEST_CASE("getMonthName") {
  CHECK(getMonthName(1) == "January");
  CHECK(getMonthName(4) == "April");
  CHECK(getMonthName(12) == "December");
}
