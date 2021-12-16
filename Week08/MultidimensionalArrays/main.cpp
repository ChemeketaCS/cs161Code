#include <iostream>
using namespace std;

const int COL_SIZE = 4;

//add all elements of an array
int sum(const int a[][COL_SIZE], int rowSize)
{
    int total = 0;
    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < COL_SIZE; column++)
        {
            total += a[row][column];
        }
    }

    return total;
}

int main()
{
    int nums[100000];


    const int ROW_SIZE = 3;
    int matrix[ROW_SIZE][COL_SIZE];

    //init to random values
    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            matrix[i][j] = rand() % 10 + 1;
        }
    }

    cout << "\nSum of all elements is " << sum(matrix, ROW_SIZE) << endl;

}
