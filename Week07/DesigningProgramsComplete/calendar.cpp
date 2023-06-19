#include <iostream>

// Include my header
#include "calendarFunctions.h"

using namespace std;

int main() {
  // Prompt the user to enter year
  cout << "Enter full year (e.g., 2001): ";
  int year;
  cin >> year;

  // Prompt the user to enter month
  cout << "Enter month in number between 1 and 12: ";
  int month;
  cin >> month;

  // Print calendar for the month of the year
  printMonth(year, month);
}
