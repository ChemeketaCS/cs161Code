#include <iostream>
using namespace std;

int main() {
  double d1 = 4;
  cout << "d1 " << d1 << endl;

  int i1 = 4.2;
  cout << "i1 " << i1 << endl;

  int i2 = d1;
  cout << "i2 " << i2 << endl;

  double d2 = i2;
  cout << "d2 " << d2 << endl;
}