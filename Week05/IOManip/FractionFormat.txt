#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter numerator and denominator:";
    int numerator, denominator;
    cin >> numerator >> denominator;

    cout << "Numerator/Denominator  Decimal Value" << endl;
    cout << right << setw(9) << numerator;
    cout << "/";
    cout << left << setw(11) << denominator;
    cout << "  ";

    double decimalValue = static_cast<double>(numerator) / denominator;
    cout << fixed << setprecision(2) << decimalValue << endl;

}

