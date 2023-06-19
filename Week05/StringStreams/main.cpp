#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string line = "Andrew 10 20 30 40 50 60 70 80 90";

  stringstream lineReader;  // declare string stream
  lineReader.str(line);     // read from line

  // Read name
  string name;
  lineReader >> name;
  cout << name << endl;

  // Read list of scores
  while (!lineReader.eof()) {
    int score;
    lineReader >> score;
    if (lineReader.fail())  // must have hit the end or bad input
      break;
    cout << score << endl;
  }
}
