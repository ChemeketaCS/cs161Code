#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter full year (e.g., 2001): ";
  int year;
  cin >> year;

  cout << "Enter month in number between 1 and 12: ";
  int month;
  cin >> month;

  // Print header
  switch (month) {
    case 1:
      cout << "January";
      break;
    case 2:
      cout << "February";
      break;
    case 3:
      cout << "March";
      break;
    case 4:
      cout << "April";
      break;
    case 5:
      cout << "May";
      break;
    case 6:
      cout << "June";
      break;
    case 7:
      cout << "July";
      break;
    case 8:
      cout << "August";
      break;
    case 9:
      cout << "September";
      break;
    case 10:
      cout << "October";
      break;
    case 11:
      cout << "November";
      break;
    case 12:
      cout << "December";
  }
  cout << " " << year << endl;
  cout << "-----------------------------" << endl;
  cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

  //------------------------------------------------
  // Print body

  int daysSince1800 = 0;

  // Get the total days from 1800 to year - 1
  for (int i = 1800; i < year; i++)
    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
      daysSince1800 = daysSince1800 + 366;
    else
      daysSince1800 = daysSince1800 + 365;

  // Add days from Jan to the month prior to the calendar month
  for (int i = 1; i < month; i++) {
    int daysInMonth = 31;  // assume 31 days

    if (i == 4 || i == 6 || i == 9 || i == 11)
      daysInMonth = 30;
    else if (i == 2) {
      if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        daysInMonth = 29;
      else
        daysInMonth = 28;
    }

    daysSince1800 = daysSince1800 + daysInMonth;
  }

  // Get start day of the week for the first date in the month
  int startDayIn1800 = 3;
  int startDay = (daysSince1800 + startDayIn1800) % 7;

  // Get number of days in the month
  int daysInMonth = 31;  // assume 31 days

  if (month == 4 || month == 6 || month == 9 || month == 11)
    daysInMonth = 30;
  else if (month == 2) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
      daysInMonth = 29;
    else
      daysInMonth = 28;
  }

  // Pad space before the first day of the month
  for (int i = 0; i < startDay; i++) cout << "    ";

  for (int i = 1; i <= daysInMonth; i++) {
    cout << setw(4) << i;

    if ((i + startDay) % 7 == 0) cout << endl;
  }

  if ((daysInMonth + startDay) % 7 != 0) cout << endl;

  cout << "-----------------------------" << endl;
}
