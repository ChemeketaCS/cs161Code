/**
 * @brief Scope Demo
 *
 * .txt files have other samples. Copy and paste code from them into main.cpp
 * to test them.
 */
#include <iostream>
using namespace std;

int main() {
  int x = 1;

  if (true) {
    x = 4;
    int y = 2;
    cout << y;
  }

  cout << x;  // x is now 4
}
