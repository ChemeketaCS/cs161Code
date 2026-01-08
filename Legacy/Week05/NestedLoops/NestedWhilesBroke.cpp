#include <iostream>

using namespace std;

int main()
{
  int i = 1;
  int j = 1;
  while (i <= 10) {
    while (j <= 10) {
      cout << i << "-" << j << "\t";
      j++;
    } // end of inner loop

    cout << endl;
    i++;
  } // end of outer loop
}
