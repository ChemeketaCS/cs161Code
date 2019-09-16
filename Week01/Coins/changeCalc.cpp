#include <iostream>

using namespace std;

int main()
{
    //Get input
    cout << "Enter the number of cents: ";
    int cents;
    cin >> cents;

    //Do math
    int numQuarters = cents / 25;       //how many quarters do we have?
    int leftoverCents = cents % 25;     //how many cents left over after removing the quarters

    /* Remove // from next two lines to test first calculations */
    //cout << "numQuarters: " << numQuarters << endl;
    //cout << "leftoverCents: " << leftoverCents << endl;

    int numDimes = leftoverCents / 10;     //how many dimes in leftover?
    leftoverCents = leftoverCents % 10;    //how many cents left after removing those dimes?

    int numNickels = leftoverCents / 5;    //remove the nickels
    leftoverCents = leftoverCents % 5;

    int numPennies = leftoverCents;           //anything left is pennies

    //Do output
    cout << numQuarters << " quarter(s)" << endl;
    cout << numDimes << " dime(s)" << endl;
    cout << numNickels << " nickel(s)" << endl;
    cout << numPennies << " penny(ies)" << endl;

    return 0;
}

