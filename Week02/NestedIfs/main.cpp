/**
 * @brief Conditionals Demo
 *
 * .bak files have other samples. Copy and paste code from them into main.cpp
 * to test them.
 */
#include <iostream>

using namespace std;
using namespace std;

int main() {
  cout << "Enter temperature: ";

  int temperature;
  cin >> temperature;

  // temperature should be between 68 and 72

  if(temperature <= 72) {
    if(temperature >= 68) {
      cout << "Temp is OK!";
    } else {
      cout << "Turn it up!";
    }
  } else {
    cout << "Turn it down!";
  }
}