#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("Numbers.txt");

  if(inFile.fail()) {
    cout << "Could not open file" << endl;
  }

  for(int i = 0; i < 5; i++) {
    int number;
    inFile >> number;
    cout << number << endl;
  }

  // // Read until end of file method 1
  // while(!inFile.eof()) {
  //   int number;
  //   inFile >> number; // try to read number
  //   if(inFile.fail())
  //     break; // ooops - read failed, get out

  //   cout << number << endl;
  // }

  // // Read until end of file method 2
  //    int number;
  //    //Try to read number, will report false if it does not work
  //    while(inFile >> number) {
  //        cout << number << endl;
  //    }
}
