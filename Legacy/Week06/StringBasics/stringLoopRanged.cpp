#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "There are spaces in this string";
    int spaceCount = 0;
    for (char letter : myString) {
        if (letter == ' ') {
            ++spaceCount;
        }
    }
    cout << spaceCount << endl;
}