
#include <iostream>

using namespace std;

int y = 100;

void messWithGlobal1() {
    y = 102;
}

void messWithGlobal2() {
    int y;
    y = 202;
}

void messWithGlobal3(int y) {
    y = 302;
}

void messWithGlobal4() {
    int y;
    ::y = 302;  //access global y
}

int main()
{
    cout << "In main, y = " << y << endl;

    messWithGlobal1();
    cout << "In main, y = " << y << endl;

    messWithGlobal2();
    cout << "In main, y = " << y << endl;

    messWithGlobal3(12);
    cout << "In main, y = " << y << endl;

    messWithGlobal4();
    cout << "In main, y = " << y << endl;
}
