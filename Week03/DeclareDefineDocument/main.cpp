#include <iostream>
using namespace std;

// Declare the function doubleValue
int doubleValue(int num);

int main() {
    int x = 5;
    // The compiler knows that doubleValue is a function that
    // takes an int and returns an int... so this makes sense
    int y = doubleValue(x);
    cout << y;
}

// Now we define the function
int doubleValue(int num) {
    int result = 2 * num;
    return result;
}