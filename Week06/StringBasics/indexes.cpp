#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit = "Watermelon";
    string vegetable = "Potato";

    // tell the vegetable object to run its size method
    cout << vegetable.size() << endl;

    // tell the fruit object to run its size method
    cout << fruit.size() << endl;

    string myString = "Hello World";
    cout << myString.at(0) << endl;
    cout << myString.at(1) << endl;
    cout << myString.at(2) << endl;
    cout << "..." << endl;

}