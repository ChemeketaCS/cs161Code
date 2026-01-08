#include <iostream>
using namespace std;

// Forward declarations of the prime functions
// bool isPrime(int number);
// int nthPrime(int n);
// string listPrimesUpTo(int limit);

// Include the .h file that declares the prime functions
#include "PrimeStuff.h"

int main()
{
  cout << "Find primes up to what number? ";
  int maxNum;
  cin >> maxNum;

  string primeList = listPrimesUpTo(maxNum);
  cout << primeList << endl;
}
