#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    //This is going to end badly...
    if(0 <= x <= 10)
        cout << "x is between 0 and 10" << endl;

    //This is correct
    if(0 <= x && x <= 10)
        cout << "x is between 0 and 10" << endl;

    return 0;
}
