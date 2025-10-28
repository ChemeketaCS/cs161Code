#include <iostream>

using namespace std;

int main() {
  cout << "Enter an integer (the input ends "
       << "if it is 0): ";

  int data;
  cin >> data;

  int sum = 0;

  // Keep reading data until the input is 0
  while(data != 0) {
    // add this number
    sum += data;

    // Read the next number
    cout << "Enter an integer (the input ends "
         << "if it is 0): ";
    cin >> data;
  }

  cout << "The sum is " << sum << endl;
}
