#include <iostream>

using namespace std;

int main()
{
  // print 1-10 with spaces in between, no trailing space
  int i = 1;

  cout << "(";

  while (i <= 10)
  {
    cout << i;
    // if not the last number, print space
    if (i != 10)
      cout << " ";

    i = i + 1;
  }

  cout << ")" << endl;
}
