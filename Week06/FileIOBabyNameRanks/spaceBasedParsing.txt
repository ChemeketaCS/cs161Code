#include <climits>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("Babynamesranking.txt");

  if(inFile.fail()) {
    cout << "No open file!" << endl;
    return 0;
  }

  //Read and ignore the first 5 pieces of data
  string junk;
  inFile >> junk >> junk >> junk >> junk >> junk;

  while(!inFile.eof()) {
    string boyname, girlname;
    int rank, trash;

    // Read next line... know it looks like: int string int string int
    inFile >> rank >> boyname >> trash >> girlname >> trash;
    if(inFile.fail())
      break; // ooops - went too far

    cout << "Rank " << rank << " most popular names were: " << boyname
         << " and " << girlname << endl;
  }
}