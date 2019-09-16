#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cstdio>

using namespace std;

void printBinary(int value) {
    char buffer [33];
    itoa(value,buffer,2);
    printf ("binary: %s\n",buffer);
}


int main()
{

    cout << "---------------------------------------------" << endl;
    unsigned int unum = UINT_MAX;  //max value
    int num = -1;

    cout << "unum: " << unum << endl;
    cout << "Bytes used for unum : " << sizeof(unum) << endl;
    printBinary(unum);
    cout << endl;
    cout << "num: " << num << endl;
    cout << "Bytes used for num: " << sizeof(num) << endl;
    printBinary(num);

    cout << "---------------------------------------------" << endl;
    cout << "1 = true, 0 = false:" << endl;
    cout << "Are unum and num the same? " << ( num == unum ) << endl;
    cout  << endl;
    cout << "Is unum bigger than 0? " << ( unum > 0 ) << endl;
    cout << "Is num bigger than 0? " << ( num > 0 ) << endl;
    cout  << endl;
    cout << "Is unsigned 0 bigger than -1? " << ( ((unsigned int)0) > -1 ) << endl;


    cout << "---------------------------------------------" << endl;
    string::size_type maxStringSize = -1;  //max value
    cout << "Max value for string::size_type : " << maxStringSize << endl;
    cout << "Bytes used for string::size_type : " << sizeof(maxStringSize) << endl;

    cout << "---------------------------------------------" << endl;
    string x = "asdf";
    int i = x.find("q");
    cout << "x.find(\"q\")          : " << x.find("q") << endl;
    cout << "find stored as int i : " << i << endl;
    cout << i << endl;
    cout << "is (x.find(\"q\") < 0) ?   : " << ( x.find("q") < 0 ) << endl;
    cout << "is (i < 0) ?             : " << ( i < 0 ) << endl;


    cout << "---------------------------------------------" << endl;
    cout << "string::npos is : " << string::npos << endl;


    return 0;
}
