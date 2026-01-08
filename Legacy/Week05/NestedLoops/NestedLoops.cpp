
#include <iostream>
using namespace std;

int main()
{
  // outer loop
  for (int i = 1; i <= 10; i++) {
    // inner loop
    for (int j = 1; j <= 10; j++) {
      cout << i << "-" << j << '\t';
    } // end inner loop

    cout << endl;
  } // end outer loop
}
