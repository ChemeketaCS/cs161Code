#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("Babynamesranking2010.txt");

    if(inFile.fail()) {
        cout << "No open file!" << endl;
        return 0;
    }

    while(!inFile.eof()) {
        string boyname, girlname;
        int rank, trash;

        //Read next line... know it looks like: int string int string int
        inFile >> rank >> boyname >> trash >> girlname >> trash;
        if(inFile.fail())
            break;         //ooops - went too far

        cout << "Rank " << rank
             << " most popular names were: "
             << boyname << " and " << girlname << endl;
    }


}

