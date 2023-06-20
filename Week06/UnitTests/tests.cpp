// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// Functions

/**
 * @brief Checks if the given number is prime
 * @param number Value to check
 * @return true if number is prime, else false
 */
bool isPrime(int number) {
  if (number < 2) return false;

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Finds the nth prime number
 * @param n assumed to be positive
 * @return nth prime
 */
int nthPrime(int n) {
  int number = 1;
  int primeCount = 0;
  while (primeCount < n) {
    number++;
    if (isPrime(number)) primeCount++;
  }
  return number;
}

// Tests
TEST_CASE("isPrime") {
  CHECK(isPrime(2) == true);
  CHECK(isPrime(3) == true);
  CHECK(isPrime(5) == true);
  CHECK(isPrime(31) == true);

  CHECK(isPrime(4) == false);
  CHECK(isPrime(9) == false);
}

TEST_CASE("isPrime - Wierd Inputs") {
  CHECK(isPrime(0) == false);
  CHECK(isPrime(-3) == false);
  CHECK(isPrime(1) == false);
}

TEST_CASE("nthPrime") {
  CHECK(nthPrime(1) == 2);
  CHECK(nthPrime(2) == 3);
  CHECK(nthPrime(4) == 7);
  CHECK(nthPrime(5) == 11);
  CHECK(nthPrime(8) == 19);
}
