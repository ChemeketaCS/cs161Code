#include <iostream>

using namespace std;

int main()
{
  // print 1-10 with spaces in between, no trailing space

  cout << "(";

  int i = 1;
  // stop before last number
  while (i < 10)
  {
    cout << i;
    cout << " "; // always print space
    i = i + 1;
  }

  cout << i; // output last number
  cout << ")" << endl;
}
