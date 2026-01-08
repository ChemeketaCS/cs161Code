#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

int main()
{

int points = 0;
int percent = 85; // Example percentage score

// if (percent < 60)
//   points = 0;
// else if (percent < 70)
//   points = 1;
// else if (percent < 80)
//   points = 2;
// else if (percent < 90)
//   points = 3;
// else
//   points = 4;

if (percent > 90)
  points = 4;
else if (percent > 80)
  points = 3;
else if (percent > 70)
  points = 2;
else if (percent > 60)
  points = 1;
else
  points = 0;


  cout << "Points: " << points << endl;


}
