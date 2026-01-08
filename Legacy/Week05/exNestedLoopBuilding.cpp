#include <iostream>
using namespace std;

int main() {

  for(int row = 1; row <= 5; ++row) {
    // Once per outer loop iteration

    for(int col = 1; col < row; ++col) {
      // Once per inner loop iteration
      cout << row << "-" << col << '\t';
    }

    cout << endl;
    // Once per outer loop iteration
  }

}
