//Bring in unit testing code and tell it to build a main function
//If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

//This pragma supresses a bunch of warnings QTCreator produces (and should not)
#pragma clang diagnostic ignored "-Woverloaded-shift-op-parentheses"

//Hide some false warnings - this is supposed to look commented out
// clazy:skip

//Tell clang analyzer to ignore doctest.h
#ifndef __clang_analyzer__
#include "doctest.h"
#endif

//Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//Functions

/**
 * @brief isPrime Checks if the given number is prime
 * @param number Value to check
 * @return true if number is prime, else false
 */
bool isPrime(int number) {
    if(number < 2)
        return false;

    for(int i = 2; i < number; i++) {
        if( number % i == 0 ) {
            return false;
        }
    }
    return true;
}

/**
 * @brief numPrimesUpTo Find the number of prime numbers up to given limit
 * @param limit Highest value to check (inclusive)
 * @return Number of primes
 */
int numPrimesUpTo(int limit) {
    int primeCount = 0;
    int number = 2; // number we are testing for primeness
    for(number = 2; number <= limit; number++) {
        if(isPrime(number))
            primeCount++;
    }
    return primeCount;
}



//Tests

TEST_CASE( "isPrime" ) {
    CHECK( isPrime(2) == true );
    CHECK( isPrime(3) == true );
    CHECK( isPrime(5) == true );
    CHECK( isPrime(31) == true );

    CHECK( isPrime(4) == false );
    CHECK( isPrime(9) == false );
}

TEST_CASE( "isPrime - Wierd Inputs" ) {
    CHECK( isPrime(0) == false );
    CHECK( isPrime(-3) == false );
    CHECK( isPrime(1) == false );
}

TEST_CASE( "numPrimesUpTo" ) {
    CHECK( numPrimesUpTo(1) == 0 );
    CHECK( numPrimesUpTo(2) == 1 );
    CHECK( numPrimesUpTo(6) == 3 );
    CHECK( numPrimesUpTo(11) == 5 );
    CHECK( numPrimesUpTo(21) == 8 );
}
