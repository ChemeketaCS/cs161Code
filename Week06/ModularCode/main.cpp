#include <iostream>
#include <cmath>
using namespace std;


//Include the .h file that declares the prime functions
#include "PrimeStuff.h"


int main()
{

    cout << "Find all prime numbers <= n, enter n: ";
    int n;
    cin >> n;

    int numPrimes = printAndCountPrimes(n);

    cout << endl << "There are " << numPrimes << " primes <= " << n << endl;

    return 0;
}


