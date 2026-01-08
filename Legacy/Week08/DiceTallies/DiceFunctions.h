#ifndef DICEFUNCTIONS_H
#define DICEFUNCTIONS_H

/**
 * @brief getRandomInt Returns a value between min and max (inclusive)
 * @param minValue smallest value to generate
 * @param maxValue largest value to generate
 * @return random number
 *
 * Note: minValue and maxValue should not be more than RAND_MAX apart
 */
int getRandomInt(int minValue, int maxValue);

/**
 * @brief rollDice rolls a number of dice and returns their sum
 * @param dice number of dice to roll
 * @param sides how many sides on each die - default value is 6
 * @return sum of the roll
 */
int rollDice(int dice, int sides = 6);

#endif // DICEFUNCTIONS_H
