#include <iostream>

using namespace std;

int getGCD(int x, int y)
{
  // find the GCD of x and y
  int number = x;
  int gcd = 1;
  while (number > 0)
  {
    if (x % number == 0 && y % number == 0)
    {
      gcd = number;
      break; // exit the loop early
    }
    number--;
  }
  return gcd;
}

int main()
{
  cout << getGCD(456, 123) << endl;
}
