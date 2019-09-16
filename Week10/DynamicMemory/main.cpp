#include <iostream>
using namespace std;

//Return pointer to item in stack
int* getBadPointer() {
    int x = 10;
    int* px = &x;
    return px;
}


int main()
{
    int* pTen = getBadPointer();

    cout << *pTen << endl;
    cout << *pTen << endl;

    return 0;
}

