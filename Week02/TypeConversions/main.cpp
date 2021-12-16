#include <iostream>

using namespace std;

int main()
{
    int myInt = 10;
    double myDouble = 12.6;

    cout << "myInt: " << myInt <<endl;
    cout << "myDouble: " << myDouble <<endl;

    double d1 = myInt;
    cout << "d1: " << d1 <<endl;

    int i1 = myDouble;                      //Compiler is worried
    cout << "i1: " << i1 <<endl;            //Value will be truncated

    int i2 = static_cast<int>(myDouble);    //Tell compiler not to worry
    cout << "i2: " << i2 <<endl;            //Value is truncated


    int rise = 5, run = 4;
    double result1 = static_cast<double>(rise/run);     //Cast is too late
    cout << "result1: " << result1 <<endl;

    double result2 = static_cast<double>(rise)/run;     //Desired order
    cout << "result2: " << result2 <<endl;
}
