#include <iostream>
#include <iomanip>

#include "calendarFunctions.h"

using namespace std;

// Get the English name for the month
string getMonthName(int month)
{
    switch (month)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return  "December";
    }
    return "???";
}


string getTitle(int year, int month) {
    string result = getMonthName(month) + ", " + to_string(year);
    return result;
}


int getDaysInMonth(int year, int month) {
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2)
        return isLeapYear(year) ? 29 : 28;

    return 31; //All other months have 31 days
}


bool isLeapYear(int year) {
    if(year % 400 == 0)
        return true;
    else if(year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}


int getStartDay(int year, int month)
{
    // Get total number of days since 1//1//1800
    int totalNumberOfDays = getDaysSince1800(year, month);

    // Calculate startDay of this month by counting
    // working from Jan 1800 which starts on Wed
    int startDay1800 = 3;
    return (totalNumberOfDays + startDay1800) % 7;
}

int getDaysSince1800(int year, int month)
{
    int total = 0;

    // Get the total days from 1800 to year - 1
    for (int i = 1800; i < year; i++)
        if (isLeapYear(i))
            total = total + 366;
        else
            total = total + 365;

    // Add days from Jan to the month prior to the calendar month
    for (int i = 1; i < month; i++)
        total = total + getDaysInMonth(year, i);

    return total;
}

void printMonthBody(int year, int month)
{
    // Get start day of the week for the first date in the month
    int startDay = getStartDay(year, month);

    // Get number of days in the month
    int numberOfDaysInMonth = getDaysInMonth(year, month);

    // Pad space before the first day of the month
    for (int i = 0; i < startDay; i++)
        cout << "    ";

    for (int i = 1; i <= numberOfDaysInMonth; i++)
    {
        cout << setw(4) << i;

        if ((i + startDay) % 7 == 0)
            cout << endl;
    }
    //Add newline if don't already end with one
    if((numberOfDaysInMonth + startDay) % 7 != 0)
        cout << endl;
}

void printMonth(int year, int month) {
    // Print the headings of the calendar
    cout << getTitle(year, month) << endl;
    cout << "-----------------------------" << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

    // Print the body of the calendar
    printMonthBody(year, month);

    cout << "-----------------------------" << endl;
}
