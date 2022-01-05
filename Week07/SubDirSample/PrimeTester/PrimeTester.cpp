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


#include "PrimeStuff.h"


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

TEST_CASE( "nthPrime" ) {
    CHECK( nthPrime(1) == 2 );
    CHECK( nthPrime(2) == 3 );
    CHECK( nthPrime(4) == 7 );
    CHECK( nthPrime(5) == 11 );
    CHECK( nthPrime(8) == 19 );
}
