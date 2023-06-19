#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#include "DiceFunctions.h"

using namespace std;

int main() {
  const int NUM_DICE = 2;
  const int MAX_ROLL = 6 * NUM_DICE;
  const int MIN_ROLL = 1 * NUM_DICE;

  // Use array to store frequency counts. Need MAX_ROLL + 1 elements so
  //  that last one has an index of MAX_ROLL
  const int ARRAY_SIZE = MAX_ROLL + 1;

  // initialize every element at 0
  int counts[ARRAY_SIZE] = {0};

  // roll a lot of dice...
  const int ROLLS = 1000;
  for (int i = 0; i < ROLLS; i++) {
    int roll = rollDice(NUM_DICE);
    counts[roll]++;  // add one to the location indexed by the roll
  }

  // print results = don't bother with indexes less than MIN_ROLL
  cout << "Results of " << ROLLS << " rolls with " << NUM_DICE
       << " dice (value:times)" << endl;
  for (int i = MIN_ROLL; i <= MAX_ROLL; i++) {
    cout << right << setw(4) << i << ":" << left << counts[i] << endl;
  }
}
