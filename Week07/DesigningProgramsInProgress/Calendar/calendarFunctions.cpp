#include "calendarFunctions.h"

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
