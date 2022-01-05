#ifndef PRIMESTUFF_H
#define PRIMESTUFF_H

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
 */
void printPrimesUpTo(int limit);


#endif // PRIMESTUFF_H
