#include <iostream>
using namespace std;


//This does not work!
void printArray(int list[])
{
    cout << list;
}


int main()
{
    int numbers[5] = {1, 4, 3, 6, 8};
    printArray(numbers);

}

