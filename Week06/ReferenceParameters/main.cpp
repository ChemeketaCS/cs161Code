#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// const string& does not copy large string, but also
//   prevents changing the value
bool isCharMatch(const string& s, int index, char c) {
    if(tolower(s.at(index)) == c)
        return true;
    else
        return false;
}

int countCharacters(const string& s, char c) {
    int count = 0;
    for(unsigned int i = 0; i < s.length(); i++) {
        if(isCharMatch(s, i, c))
            count++;
    }
    return count;
}

int main()
{
    ifstream inputFile;
    inputFile.open("Sherlock.txt");

    //Entire text of book
    string text;
    //read until end of file
    while(!inputFile.eof()) {
        string line;
        getline(inputFile, line); //read one line
        text += line;             //add to text variable
    }

    cout << "Starting..." << endl;
    int startTime = clock();

    //For each letter a-z
    for(char letter = 'a'; letter <= 'z'; letter++) {
        int numCopies = 0;
        //For each character in the text
        for(unsigned int charNum = 0; charNum < text.length(); charNum++) {
            //Check if s.at(charNum) matches letter ignoring case
            if(isCharMatch(text, charNum, letter))
                numCopies++;
        }
        cout << letter << " : " << numCopies << endl;
    }
    cout << "That took "
         << static_cast<double>(clock() - startTime) / CLOCKS_PER_SEC * 1000
         << " ms" << endl;
}
