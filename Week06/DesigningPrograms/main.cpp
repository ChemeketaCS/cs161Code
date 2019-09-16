#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printMonth(int year, int month);
void printMonthTitle(int year, int month);
string getMonthName(int month);

void printMonthBody(int year, int month);
int getStartDay(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getNumberOfDaysInMonth(int year, int month);
bool isLeapYear(int year);

int main()
{
//    string name = getMonthName(4);
//    string name2 = getMonthName(13);

//    //Test one function
//    for(int i = 1; i <= 13; i++)
//        cout << i << " : " << getMonthName(i) << endl;

    printMonthTitle(2005, 12);

}


void printMonthTitle(int year, int month) {
    string monthName = getMonthName(month);

    cout << "       " << monthName << ", " << year << endl;
}

// Get the English name for the month
string getMonthName(int month)
{
    switch (month)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "March";
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "October";
        break;
    case 11:
        return "November";
        break;
    case 12:
        return  "December";
    }
    return "???";
}
