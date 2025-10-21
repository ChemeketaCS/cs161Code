#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

int main()
{

  int number = 2; // Example number

  switch (number)
  {
  case 1:
    cout << "one" << endl;
    break;
  case 2:
    cout << "two" << endl;
    break;
  case 3:
    cout << "three" << endl;
    break;
  default:
    cout << "unknown" << endl;
    break;
  }

  int dayOfWeek = 2; // Example day of the week (0=Sunday, 1=Monday, ..., 6=Saturday)
  switch (dayOfWeek)
  {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    cout << "Weekday!";
    break;
  case 0:
  case 6:
    cout << "Weekend!";
    break;
  }
}
