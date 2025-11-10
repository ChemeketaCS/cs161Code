#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

/// Returns true if the indexed char from s matches c ignoring case
// const string& avoids copying the large string over and over
//  but guarantees it won't get changed
bool isMatchAt(const string &s, size_t index, char c)
{
  if (tolower(s.at(index)) == c)
    return true;
  else
    return false;
}

int main()
{
  ifstream inputFile;
  inputFile.open("Sherlock.txt");

  // Entire text of book
  string text;
  // read until end of file

  while (!inputFile.eof())
  {
    string line;
    getline(inputFile, line); // read one line
    text += line;             // add to text variable
  }

  cout << "Starting..." << endl;
  int startTime = clock();

  // For each letter a-z
  for (char letter = 'a'; letter <= 'z'; letter++)
  {
    int numCopies = 0;
    // For each character in the text
    for (size_t charNum = 0; charNum < text.length(); charNum++)
    {
      // Check if s.at(charNum) matches letter ignoring case
      if (isMatchAt(text, charNum, letter))
        numCopies++;
    }
    cout << letter << " : " << numCopies << endl;
  }
  cout << "That took "
       << static_cast<double>(clock() - startTime) / CLOCKS_PER_SEC * 1000
       << " ms" << endl;
}
