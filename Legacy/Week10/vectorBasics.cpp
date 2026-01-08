#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> table = {
      {6, 3, 2, 5, 7}, {11, 1, 4, 5, 8}, {7, 2, 6, 5, 3}};

  // // A row of 5 integers, all initialized to 0
  // vector<int> row(5, 0);
  // // A table that has three copies of row
  // vector<vector<int>> table(3, row);

  // // Or all in one
  // vector<vector<int>> table(3, vector<int>(5, 0));

  for (const vector<int> &row : table) {
    for (int elem : row) {
      cout << elem << " ";
    }
    cout << endl;
  }

  size_t rowCount = table.size();
  size_t colCount = table.at(0).size();

  for (size_t row = 0; row < rowCount; ++row) {
    for (size_t col = 0; col < colCount; ++col) {
      cout << table.at(row).at(col) << " ";
    }
    cout << endl;
  }

  for (size_t col = 0; col < colCount; ++col) {
    for (size_t row = 0; row < rowCount; ++row) {
      cout << table.at(row).at(col) << " ";
    }
    cout << endl;
  }

  size_t colCount = table.at(0).size();
  for (size_t col = 0; col < colCount; ++col) {
    // row is fixed at 0
    cout << table.at(0).at(col) << " ";
  }
  cout << endl;

  size_t rowCount = table.size();
  for (size_t row = 0; row < rowCount; ++row) {
    // column fixed at 2
    cout << table.at(row).at(2) << " ";
  }
  cout << endl;
}