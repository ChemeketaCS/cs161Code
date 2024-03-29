/**
 * @brief Constants Demo
 *
 * .bak files have other samples. Copy and paste code from them into main.cpp
 * to test them.
 */
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int SEC_PER_MINUTE = 60;
  const int MIN_PER_HOUR = 60;
  const int HOURS_PER_DAY = 24;
  const int SEC_PER_DAY = SEC_PER_MINUTE * MIN_PER_HOUR * HOURS_PER_DAY;
  const int SEC_PER_HOUR = SEC_PER_MINUTE * MIN_PER_HOUR;

  unsigned int totalSeconds = time(0);

  // mod by seconds in a day to get just the remainder...
  //   that will be seconds so far today
  int secondsToday = totalSeconds % SEC_PER_DAY;

  int hour = secondsToday / SEC_PER_HOUR;

  int secondsThisHour = secondsToday % SEC_PER_HOUR;
  int minute = secondsThisHour / SEC_PER_MINUTE;

  int second = secondsThisHour % SEC_PER_MINUTE;

  cout << hour << ":" << minute << ":" << second << endl;
}
