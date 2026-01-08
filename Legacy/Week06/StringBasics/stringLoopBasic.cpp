#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    for (size_t i = 0; i < myString.size(); ++i) {
        char letter = myString.at(i);
        cout << i << ": " << letter << endl;
    }
}
