#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string daysOfWeeks[] = { "Sunday",
                             "Monday",
                             "Tuesday",
                             "Wedensday",
                             "Thursday",
                             "Friday",
                             "Saturday" };

    cout << "Enter day number:";
    int day;
    cin >> day;

    //Using lookup table:
    cout << daysOfWeeks[day] << endl;

    //Using if/else
    if(day == 0)
        cout << "Sunday" << endl;
    else if(day == 1)
        cout << "Monday" << endl;
    else if(day == 2)
        cout << "Tuesday" << endl;
    else if(day == 3)
        cout << "Wedensday" << endl;
    else if(day == 4)
        cout << "Thursday" << endl;
    else if(day == 5)
        cout << "Friday" << endl;
    else if(day == 6)
        cout << "Saturday" << endl;


}
