#include <iostream>
using namespace std;

//Static variables are bad in general...
int keepCount() {
    static int x = 0;
    x++;
    return x;
}

//Occaisionally useful to make sure an initialization happens just once
int rollDie() {
    static bool initialized = false;
    if(!initialized) {
        srand(time(0));
        initialized = true;
    }

    return rand() % 6 + 1;
}

int main()
{
    cout << "Keep Count" << endl;
    cout << keepCount() << endl;
    cout << keepCount() << endl;
    cout << keepCount() << endl;
    cout << keepCount() << endl;
    cout << keepCount() << endl;
    cout << "Rolls" << endl;
    cout << rollDie() << endl;
    cout << rollDie() << endl;
    cout << rollDie() << endl;
    cout << rollDie() << endl;
}
