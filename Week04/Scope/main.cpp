#include <iostream>
using namespace std;

int main() {
    double hours = 45.5; // example input
    double rate = 18.5;  // Assume $18.50 per hour

    double pay = 0; // declare pay in outer scope
    
    if (hours > 40) {
        // modify the existing pay variable
        pay = 40 * rate + (hours - 40) * rate * 1.5;
    } else {
        // modify the existing pay variable
        pay = hours * rate;
    }

    cout << "Pay: " << pay << endl;
}
