#include <iostream>

using namespace std;


int main()
{
    int x = 1;

    if( true ) {
        int y = 2;
        int x = y;
        cout << y << endl;
    }

    cout << x << endl;

    return 0;
}

