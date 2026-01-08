#include <iostream>

using namespace std;

int main()
{
  int total = 0;
  int i = 1;
  while(i <= 5) {
    // do work
    cout << "Enter a number: ";
    int num;
    cin >> num;

    total += num;

    // update control variable
    ++i;
  }
  cout << "Total: " << total << endl;
}
