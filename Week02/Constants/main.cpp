#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number of inches: ";
  int inches;
  cin >> inches;

  double cm = inches * 2.54;
  cout << "That is " << cm << " centimeters." << endl;
}
