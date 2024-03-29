#include <iostream>
using namespace std;

// returns the absolute value of a number
int myAbs(int number) {
  if(number < 0)
    number = -number;

  return number;
}

// returns true if the two numbers are within one of each other
bool closeEnough(int num1, int num2) {
  int difference = num1 - num2;
  // use myabs to ensure value is positive
  difference = myAbs(difference);

  if(difference <= 1)
    return true;
  else
    return false;
}

int main() {
  int x = 4;
  int y = 3;
  int z = 5;
  cout << "x and y are close: " << closeEnough(x, y) << endl;
  cout << "x and z are close: " << closeEnough(x, z) << endl;
  cout << "y and z are close: " << closeEnough(y, z) << endl;
}
