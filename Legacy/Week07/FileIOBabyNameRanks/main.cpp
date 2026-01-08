#include <climits>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("Babynamesranking.csv");

  if(inFile.fail()) {
    cout << "No open file!" << endl;
    return 0;
  }

  while(!inFile.eof()) {
    //get an entire line from the file
    string line;
    getline(inFile, line);

    if(inFile.fail() || line.empty())
      break; // ooops - went too far

    size_t nextSpaceLoc = line.find(" ");
    //get the text up to the first space
    string rankStr = line.substr(0, nextSpaceLoc);
    //turn it into an int
    int rank = stoi(rankStr);
    //delete up to and including space
    line = line.substr(nextSpaceLoc + 1);

    //get the next part - boyname
    nextSpaceLoc = line.find(" ");
    string boyname = line.substr(0, nextSpaceLoc);
    line = line.substr(nextSpaceLoc + 1);

    //next part - trash just find space and delete up to it
    nextSpaceLoc = line.find(" ");
    line = line.substr(nextSpaceLoc + 1);

    //next part - girlname
    nextSpaceLoc = line.find(" ");
    string girlname = line.substr(0, nextSpaceLoc);

    //don't need anything else on the line
    
    cout << "Rank " << rank << " most popular names were: " << boyname
         << " and " << girlname << endl;
  }
}
