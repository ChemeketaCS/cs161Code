#include <iostream>

using namespace std;

int main() {
  int x = 10;

  // y stores a reference to int variable x
  int& y = x;

  cout << "y = " << y << endl;

  y = 15;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}
