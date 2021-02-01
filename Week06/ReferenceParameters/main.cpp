#include <iostream>

using namespace std;


void addOne(int& x) {
    x = x + 1;
}

int main()
{
    int num = 100;
    cout << "In main, num = " << num << endl;

    addOne(num);
    cout << "In main, num = " << num << endl;

}
