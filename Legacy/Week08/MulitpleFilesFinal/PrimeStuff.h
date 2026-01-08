#ifndef PRIMESTUFF_H
#define PRIMESTUFF_H

#include <string>

// Should not use 'using namespace std;' in header files

/**
 * @brief Determines if given number is prime or not
 * @param number Number to test
 * @return True if number is prime
 */
bool isPrime(int number);

/**
 * @brief Finds the nth prime number
 * @param n assumed to be positive
 * @return nth prime
 */
int nthPrime(int n);

/**
 * @brief Prints all primes up to given limit
 * @param limit Highest value (inclusive) to consider
 * @return String listing all primes up to limit
 *
 * Uses std::string since we are not 'using namespace std;'
 */
std::string listPrimesUpTo(int limit);

#endif // PRIMESTUFF_H
