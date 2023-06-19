#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // showpoint
  cout << 15.0 << " " << showpoint << 15.0 << " ";
  cout << 4.0 << endl;
  cout << "-----------------------" << endl;

  // scientific/fixed
  cout << 1231234234.23123123 << endl;
  cout << fixed;
  cout << 1231234234.23123123 << endl;
  cout << scientific;
  cout << 1231234234.23123123 << endl;
  cout << "-----------------------" << endl;

  // setprecision
  cout << fixed << setprecision(2);
  cout << 15.123456789 << endl;
  cout << 435.3 << endl;

  cout << scientific << setprecision(2);
  cout << 15.123456789 << endl;
  cout << 435.3 << endl;
  cout << "-----------------------" << endl;

  // fill
  cout << left << setfill('*');
  cout << setw(5) << 12 << setw(5) << 10;
}
