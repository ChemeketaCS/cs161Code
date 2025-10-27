#include <iostream>

using namespace std;

int main()
{
  int count = 1;

  while (count <= 100)
  {
    cout << "Hello for the " << count << " time" << endl;
    ++count;
  }

  cout << "Bye!" << endl;
}
