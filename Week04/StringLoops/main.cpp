#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string text = "Hello there";

  // Forward
  int textLength = static_cast<int>(text.length());
  for(int i = 0; i < textLength; i++) {
    cout << text.at(i) << " . ";
  }
  cout << endl;

  // Reverse
  for(int i = textLength - 1; i >= 0; i--) {
    cout << text.at(i) << " . ";
  }
  cout << endl;

  // Shift every character by one letter
  string text2 = text; // make a copy to modify
  int stringLength = static_cast<int>(text2.length());
  for(int i = 0; i < stringLength; i++) {
    char currentChar = text2.at(i);
    char shiftedChar = static_cast<char>(currentChar + 1);

    text2.at(i) = shiftedChar;
  }

  cout << text << " shifed by one character:" << endl;
  cout << text2 << endl;
}
