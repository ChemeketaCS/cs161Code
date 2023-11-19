// Include any standard libraies we need:
#include <cmath>
#include <iostream>
using namespace std;

// Include the .h file that declares these functions
#include "PrimeStuff.h"

bool isPrime(int number) {
  if(number < 2)
    return false;

  for(int i = 2; i < number; i++) {
    if(number % i == 0) {
      return false;
    }
  }
  return true;
}

int nthPrime(int n) {
  int number = 1;
  int primeCount = 0;
  while(primeCount < n) {
    number++;
    if(isPrime(number))
      primeCount++;
  }
  return number;
}

void printPrimesUpTo(int limit) {
  int numberOfPrimes = 0;
  const int NUMBERS_PER_LINE = 10;
  int numbersOnLine = 0;
  int number = 2; // number we are testing for primeness
  while(number <= limit) {
    if(isPrime(number)) {
      cout << number << " ";
      numberOfPrimes++;
      numbersOnLine++;
      if(numbersOnLine == NUMBERS_PER_LINE) {
        cout << endl;
        numbersOnLine = 0;
      }
    }
    number++;
  }
}
