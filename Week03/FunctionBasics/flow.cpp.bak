#include <iostream>
using namespace std;

void printMessage(int num) {
    cout << "Hello, from printMessage(" << num << ")" << endl;
}

void printMessageTwice() {
    cout << "In printMessageTwice()" << endl;
    printMessage(1);
    cout << "Back in printMessageTwice()" << endl;
    printMessage(2);
    cout << "Leaving printMessageTwice()" << endl;
}

int main() {
    cout << "Starting the program" << endl;
    printMessageTwice();
    cout << "Back in main()" << endl;
    printMessage(3);
    cout << "Ending the program" << endl;
}