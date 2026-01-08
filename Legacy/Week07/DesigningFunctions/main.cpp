#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

string makeDateString(int month, int day, int year) {
  int shortYear = year % 100;

  string dateString = "";
  dateString +=
      to_string(month) + "/" + to_string(day) + "/" + to_string(shortYear);

  return dateString;
}

string makeDateString2(int month, int day, int year) {
  int shortYear = year % 100;

  // Use stringstream to build up answer
  stringstream stringBuilder;
  stringBuilder << month << "/" << day << "/" << shortYear;

  // Return the string that was built
  return stringBuilder.str();
}

string formatMoney(double amount) {
  stringstream stringBuilder;
  stringBuilder << fixed << setprecision(2);
  stringBuilder << "$" << amount;

  return stringBuilder.str();
}

int main() {
  cout << makeDateString(10, 5, 1998) << endl;
  cout << makeDateString2(10, 5, 1998) << endl;

  double money = 2500 * 1.01914;
  cout << formatMoney(money) << endl;
}
