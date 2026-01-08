#include <iostream>
using namespace std;

int main() {
  int totalSeconds = 3728;

  int totalMinutes = totalSeconds / 60;
  int leftoverSeconds = totalSeconds % 60;

  int hours = totalMinutes / 60;
  int leftoverMinutes = totalMinutes % 60;

  cout << hours << " hours" << endl;
  cout << leftoverMinutes << " minutes" << endl;
  cout << leftoverSeconds << " seconds" << endl;
}
