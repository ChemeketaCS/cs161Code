#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a 2D vector (3x4) and initialize it
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Traverse the matrix using range-based for loop
    cout << "Matrix elements:" << endl;
    for (const vector<int>& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}