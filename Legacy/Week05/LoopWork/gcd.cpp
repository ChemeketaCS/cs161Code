#include <iostream>

using namespace std;

int getGCD(int x, int y)
{
  // find the GCD of x and y
  int number = 1;
  int gcd = 1;
  while (number <= x)
  {
    if (x % number == 0 && y % number == 0)
    {
      gcd = number;
      cout << "A divisor of " << x << " and " << y << " is: " << number << endl;
    }
    number++;
  }
  return gcd;
}

int main()
{
  cout << getGCD(456, 123) << endl;
}
