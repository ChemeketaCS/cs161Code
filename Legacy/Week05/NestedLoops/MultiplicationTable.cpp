#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  cout << "Multiplication Table";
  cout << endl;

  // Display header row
  cout << "\t|\t";
  for (int col = 1; col <= 6; col++) {
    cout << col << "\t";
  }

  // Display table body
  for (int row = 1; row <= 6; row++) {
    // Display row header
    cout << row << "\t|";
    for (int col = 1; col <= 6; col++) {
      int product = row * col;
      // Display the product and align properly
      cout << "\t" << product;
    }
    cout << endl;
  }
}
