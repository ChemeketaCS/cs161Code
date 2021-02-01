#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Gather inputs
    double a, b;
    cout << "Enter length of side a: ";
    cin >> a;

    cout << "Enter length of side b: ";
    cin >> b;

    //Do math
    double aSquared = pow(a, 2);
    double bSquared = pow(b, 2);
    double cSquared = aSquared + bSquared;
    double c = pow(cSquared, 0.5);

    //Output Answer
    cout << "Hypotenuse is: " << c << endl;

}

