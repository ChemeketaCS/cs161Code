#ifndef GRADETALLIES_H
#define GRADETALLIES_H

/**
 * @brief printArray prints to console in format: 1, 2, 3
 * @param theArray array of integers to print
 * @param arraySize number of items to print starting from index 0
 */
void printArray(const int theArray[], int arraySize);

/**
 * @brief fillRandomScores fills array with random numbers between 50 and 100
 * @param theArray array to be filled
 * @param arraySize number of elements to fill starting from 0
 */
void fillRandomScores(int theArray[], int arraySize);

/**
 * @brief getRandomInt Returns a value between min and max (inclusive)
 * @param minValue smallest value to generate
 * @param maxValue largest value to generate
 * @return random number
 *
 * Note: minValue and maxValue should not be more than RAND_MAX apart
 */
int getRandomInt(int minValue, int maxValue);


#endif // GRADETALLIES_H
