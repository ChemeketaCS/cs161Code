#include "DiceFunctions.h"

#include <cstdlib>
#include <ctime>

int getRandomInt(int minValue, int maxValue) {
  static bool firstRun = true;
  if (firstRun) {
    srand(time(0));
    firstRun = false;
  }

  int range = maxValue - minValue + 1;
  int roll = rand() % range + minValue;
  return roll;
}

int rollDice(int dice, int sides) {
  int total = 0;
  while (dice > 0) {
    total += getRandomInt(1, sides);
    dice--;
  }
  return total;
}
