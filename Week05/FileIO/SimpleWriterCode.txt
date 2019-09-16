#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;
    outFile.open("MyData.txt");


    outFile << "Hello";
    outFile << " there" << endl;
    outFile << setw(10) << 12;

    outFile.close();
    if( !outFile.fail() )
        cout << "File written successfully" << endl;

    return 0;
}

