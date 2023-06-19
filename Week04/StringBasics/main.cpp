#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;

  // read a string up to whitespace
  // cin >> name;

  // read a string up to end of line
  getline(cin, name);

  cout << name;
}
