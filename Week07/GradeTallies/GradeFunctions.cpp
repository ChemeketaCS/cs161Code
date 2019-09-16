#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

#include "GradeFunctions.h"

using namespace std;

void fillRandomScores(int theArray[], int arraySize)
{
    for(int i = 0; i < arraySize; i++) {
        //generate score from 50-100
        theArray[i] = getRandomInt(0, 50) + 50;
    }
}

//Need to pass array and the size
void printArray(const int theArray[], int arraySize)
{
    //cout << "the value stored in theArray is: " << theArray << endl;
    //print all but the last value
    for(int i = 0; i < arraySize - 1; i++)
    {
        cout << setw(3) << theArray[i] << ", ";
    }
    //last value is special
    cout << setw(3) << theArray[arraySize - 1] << endl;
}


int getRandomInt(int minValue, int maxValue)
{
    static bool firstRun = true;
    if(firstRun)
    {
        srand(time(0));
        firstRun = false;
    }

    int range = maxValue - minValue + 1;
    int roll = rand() % range + minValue;
    return roll;
}

