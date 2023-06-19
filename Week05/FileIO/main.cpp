#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("Numbers.txt");

  if (inFile.fail()) {
    cout << "Could not open file" << endl;
    return 0;
  }

  int number;
  inFile >> number;  // read number from file

  cout << number << endl;
}
