// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

// This pragma supresses a bunch of warnings QTCreator produces (and should not)
#pragma clang diagnostic ignored "-Woverloaded-shift-op-parentheses"

// Hide some false warnings - this is supposed to look commented out
//  clazy:skip

// Tell clang analyzer to ignore doctest.h
#ifndef __clang_analyzer__
#include "doctest.h"
#endif

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

TEST_CASE("getNumberOfDaysInMonth") {
  CHECK(getDaysInMonth(2021, 2) == 28);
  CHECK(getDaysInMonth(2020, 2) == 29);
  CHECK(getDaysInMonth(2021, 4) == 30);
  CHECK(getDaysInMonth(2021, 11) == 30);
  CHECK(getDaysInMonth(2021, 12) == 31);
}

TEST_CASE("getStartDay") {
  CHECK(getStartDay(2021, 1) == 5);
  CHECK(getStartDay(2020, 4) == 3);
  CHECK(getStartDay(2021, 11) == 1);
}

TEST_CASE("getDaysSince1800") {
  CHECK(getDaysSince1800(1801, 1) == 365);
  CHECK(getDaysSince1800(1801, 2) == 396);
  CHECK(getDaysSince1800(2021, 1) == 80719);
  CHECK(getDaysSince1800(2020, 4) == 80444);
}
