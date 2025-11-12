#include <iostream>

using namespace std;

int main()
{
  int total = 0;
  int i = 1;
  while(i <= 5) {
    // do work
    cout << i << " ";
    total += i;

    // update control variable
    ++i;
  }
  // cout << endl;
  cout << "Total: " << total << endl;
}
