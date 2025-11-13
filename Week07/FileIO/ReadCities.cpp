#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("Cities.txt");

  // Get the entire first line
  string line;
  getline(inFile, line);

  // Keep going until end of file or failure
  while(!inFile.eof() && !inFile.fail()) {
    // Print out last line read
    cout << line << endl;
    // Get the next line
    getline(inFile, line);
  }

  cout << "Done reading file." << endl;
}
