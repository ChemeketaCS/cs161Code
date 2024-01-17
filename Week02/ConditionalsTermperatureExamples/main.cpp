/**
 * @brief Conditionals Demo
 *
 * .txt files have other samples. Copy and paste code from them into main.cpp
 * to test them.
 */
#include <iostream>

using namespace std;

//A bad version of the program
int main() {
  cout << "Enter temperature: ";

  int temperature;
  cin >> temperature;

  if(temperature > 72)
    cout << "Adjust the thermostat!" << endl;
  else
    cout << "Don't touch that dial!" << endl;

  if(temperature < 68)
    cout << "Adjust the thermostat!" << endl;
  else
    cout << "Don't touch that dial!" << endl;
}
