#include <iostream>
using namespace std;

int main() {
    string fruit = "Watermelon";
    string vegetable = "Potato";

    // tell the vegetable object to run its size method
    cout << vegetable.size() << endl;

    // tell the fruit object to run its size method
    cout << fruit.size() << endl;

    // cout << size() << endl; // ERROR! there is no standalone size function
}