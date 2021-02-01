#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    for(int i = 2; i < number; i++) {
        if( number % i == 0 ) {
            return false;
        }
    }
    return true;
}

int printAndCountPrimes(int limit) {
    int numberOfPrimes = 0;
    const int NUMBERS_PER_LINE = 10;
    int numbersOnLine = 0;
    int number = 2; // number we are testing for primeness
    while (number <= limit)
    {
        if( isPrime(number) ) {
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

    return numberOfPrimes;
}


int main()
{

    cout << "Find all prime numbers <= n, enter n: ";
    int n;
    cin >> n;

    int numPrimes = printAndCountPrimes(n);

    cout << endl << "There are " << numPrimes << " primes <= " << n << endl;

}
