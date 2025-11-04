#include <iostream>
using namespace std;

int main() {
    string fruit = "Watermelon";
    size_t wordsize = fruit.size();
    cout << wordsize << endl;

    if (wordsize > 5) {
        cout << "That's a long word!" << endl;
    }

    size_t a = 2;
    size_t b = a - 5;  // b can't be negative...
    cout << b << endl; // prints a large positive number

    
    // Better...
    size_t wordsize1 = fruit.size();

    // Works fine if you want to just use an int
    int wordsize2 = static_cast<int>(fruit.size());

}
