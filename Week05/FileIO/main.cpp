#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("Numbers.txt");
    if(inFile.fail()) {
        cout << " Could not open file";
        return 0;
    }

    int sum = 0;
    int numNumbers = 0;
    int highestValue = INT_MIN;  //super low value

    while( !inFile.eof() ) {
        int num;
        inFile >> num;

        if(inFile.fail()) {
            break;
        }

        //check to see if this is the highest number
        if( num > highestValue )
            highestValue = num;

        sum += num;
        numNumbers++;
    }

    double average = static_cast<double>(sum)/numNumbers;

    cout << "I read in " << numNumbers << " values" << endl;
    cout << "The highest was " << highestValue << endl;
    cout << "The average was " << average << endl;

}

