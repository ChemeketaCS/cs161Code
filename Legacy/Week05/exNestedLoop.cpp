#include <iostream>
using namespace std;

int main() {

  for(int i = 1; i <= 3; ++i) {
    // Once per outer loop iteration

    for(int j = 1; j <= 5; ++j) {
      // Once per inner loop iteration
      cout << i << "-" << j << '\t';
    }

    cout << endl;
    // Once per outer loop iteration
  }

}
