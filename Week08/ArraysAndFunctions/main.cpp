#include <iostream>
using namespace std;

/**
 * @brief findMin   Returns minimum value in array
 * @param theArray  Array to search
 * @param arraySize Size of array - must be >= 1
 * @return          Lowest value from array
 */
int findMin(const int theArray[], int arraySize) {
    int smallest = theArray[0]; //smallest is first

    for (int index = 1; index < arraySize; index++) {
        //if current value smaller, update smallest
        if( theArray[index] < smallest )
            smallest = theArray[index];
    }
    return smallest;
}


/**
 * @brief findMin   Returns location of minimum value in array
 * @param theArray  Array to search
 * @param arraySize Size of array - must be >= 1
 * @return          Index of lowest value from array
 */
int findIndexOfMin(const int theArray[], int arraySize) {
    int smallestIndex = 0; //first value (index 0) is smallest

    for (int index = 1; index < arraySize; index++) {
        //if current value smaller than smallest, update index of smallest
        if( theArray[index] < theArray[smallestIndex] )
            smallestIndex = index;
    }
    return smallestIndex;
}


//Print size elements of the array list
void printArray(const int list[], int size)
{
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}


int main()
{
    const int ARRAY_SIZE = 6;
    int list[] = {32, 14, 81, 42, 73, 28};

    cout << "The original array: ";
    printArray(list, ARRAY_SIZE);
    cout << endl;

    cout << "Smallest value: " << findMin(list, ARRAY_SIZE) << endl;

    int locOfSmallest = findIndexOfMin(list, ARRAY_SIZE);
    cout << "Location of smallest: " << locOfSmallest
         << "   value: " << list[locOfSmallest] << endl;


}
