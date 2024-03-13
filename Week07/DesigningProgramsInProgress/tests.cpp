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

TEST_CASE("getTitle") {
  CHECK(getTitle(2020, 4) == "April, 2020");
  CHECK(getTitle(1906, 10) == "October, 1906");
}

TEST_CASE("isLeapYear") {
  CHECK(isLeapYear(2021) == false);
  CHECK(isLeapYear(2020) == true);
  CHECK(isLeapYear(1900) == false);
  CHECK(isLeapYear(2000) == true);
}

TEST_CASE("getDaysInMonth") {
  CHECK(getDaysInMonth(2021, 2) == 28);
  CHECK(getDaysInMonth(2020, 2) == 29);
  CHECK(getDaysInMonth(2021, 4) == 30);
  CHECK(getDaysInMonth(2021, 11) == 30);
  CHECK(getDaysInMonth(2021, 12) == 31);
}
