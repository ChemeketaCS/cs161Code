#include <iostream>

using namespace std;

int main()
{
  int i = 1;
  while(i <= 5) {
    // do work
    cout << i << " ";
    // update control variable
    ++i;
  }
  cout << endl;
}
