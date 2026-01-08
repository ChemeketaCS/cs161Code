#include <iostream>
using namespace std;

int main()
{
    const double START_VALUE = 10000.0;
    const double GROWTH_RATE = 0.07;
    const double TARGET = 2 * START_VALUE;

    cout << "Year\tInvestment Amount" << endl;
    cout << "------------------------" << endl;
    int years = 1;
    double balance = START_VALUE;
    while (balance < TARGET)
    {
        cout << years << "\t$" << balance << endl;
        // Updates
        years++;
        balance *= (1 + GROWTH_RATE);
    }
    cout << years << "\t$" << balance << endl;
}