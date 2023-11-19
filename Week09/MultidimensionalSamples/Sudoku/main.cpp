#include <iostream>
using namespace std;

// Get a sudoku board from keyboard
void readASolution(int grid[][9]);

// Check if whole board is valid
bool isValid(const int grid[][9]);

// Check if one square is valid
bool isValid(int i, int j, const int grid[][9]);

int main() {
  // Read a Sudoku puzzle
  int grid[9][9];
  readASolution(grid);

  cout << (isValid(grid) ? "Valid solution" : "Invalid solution");
}

void readASolution(int grid[][9]) {
  cout << "Enter a Sudoku puzzle:" << endl;
  for(int i = 0; i < 9; i++)
    for(int j = 0; j < 9; j++)
      cin >> grid[i][j];
}

bool isValid(const int grid[][9]) {
  for(int i = 0; i < 9; i++)
    for(int j = 0; j < 9; j++)
      if(grid[i][j] < 1 || grid[i][j] > 9 || !isValid(i, j, grid))
        return false;

  return true; // The fixed cells are valid
}

bool isValid(int i, int j, const int grid[][9]) {
  // Each square should not have any match in same row,
  //  column and box as itself

  // Check whether grid[i][j] is valid within row
  for(int column = 0; column < 9; column++)
    if(column != j && grid[i][column] == grid[i][j])
      return false;

  // Check whether grid[i][j] is valid within column
  for(int row = 0; row < 9; row++)
    if(row != i && grid[row][j] == grid[i][j])
      return false;

  // Check whether grid[i][j] is valid in the 3-by-3 box
  // row 0-2 are one box, 3-5 another, 6-8 another
  // row/3 gives box number (0,1,2)
  // boxNumber * 3 gives starting index
  for(int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++)
    for(int col = (j / 3) * 3; col < (j / 3) * 3 + 3; col++)
      if(row != i && col != j && grid[row][col] == grid[i][j])
        return false;

  return true; // The current value at grid[i][j] is valid
}
