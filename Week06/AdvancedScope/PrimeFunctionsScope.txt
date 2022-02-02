#include <iostream>
using namespace std;

bool isPrime(int number) {              //number(isPrime's) in scope
    if(number < 2)
        return false;

    for(int i = 2; i < number; i++) {   //i in scope
        if( number % i == 0 ) {
            return false;
        }                               //i out of scope
    }
    return true;
}                                       //number(isPrime's) out of scope

int nthPrime(int n) {                   //n(nthPrime's) in scope
    int number = 1;                     //number(nthPrime's) in scope
    int primeCount = 0;                 //primeCount in scope
    while(primeCount < n) {
        number++;
        if(isPrime(number))
            primeCount++;
    }
    return number;
}                                       //n(nthPrime's), number(isPrime's), primeCount out of scope

int main() {
    int n = 5;                          //n(main's in scope)
    int primeNum = nthPrime(n);         //primeNum(main's in scope)
    cout << "The " << n << "th prime is " << primeNum << endl;
}                                       //n and primeNum from main out of scope
