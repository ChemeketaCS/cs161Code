#include <iostream>
#include <cmath>
using namespace std;

void printAsMoney(double dollars) {
    // round to the nearest cent
    double cents = dollars * 100;
    cents = round(cents);
    dollars = cents / 100.0;
    // then print
    cout << "$" << dollars << endl;
    return;  //optional in a void function - we could leave this out
}

int main() {
    double amount = 123.456234;
    printAsMoney(amount);
}