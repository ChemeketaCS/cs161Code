#include <iostream>
#include <vector>

using namespace std;

int main() {
    // A row of 5 integers, all initialized to 0
  vector<int> row(5, 0);

  // A table that has three copies of row
  vector<vector<int>> table(3, row);

  // Or more concisely, a vector of 3 rows, each a vector of 5 integers initialized to 0
  vector<vector<int>> table2(3, vector<int>(5, 0));

  vector<vector<int>> table3 = {
      {6, 3, 2, 5, 7},
      {11, 1, 4, 5, 8},
      {7, 2, 6, 5, 3}
  };


  // Access an element
  cout << "Element at row 0, column 1: " << table.at(0).at(1) << endl;
  table.at(0).at(1) = 3;
  cout << "After setting, element at row 0, column 1: " << table.at(0).at(1) << endl;
}