#include <iostream>
using namespace std;

// Include the .h file that declares the prime functions
#include "PrimeStuff.h"

int main() {
  cout << "Would you like to find all the primes up to a value n (enter 1),"
       << endl
       << "or find the first n primes (enter 2)? ";

  int job;
  cin >> job;

  if(job == 1) {
    cout << "What number do you want to stop searching at? ";
    int maxNum;
    cin >> maxNum;

    printPrimesUpTo(maxNum);
    cout << endl;
  } else if(job == 2) {
    cout << "Which prime do you want to find? ";
    int n;
    cin >> n;

    int number = nthPrime(n);

    cout << number << " is the " << n << "th prime number: " << endl;
    printPrimesUpTo(number);
    cout << endl;
  }
}
