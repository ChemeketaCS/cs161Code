#include <iomanip>
#include <iostream>

using namespace std;

int sum(int start, int end) {
  int sum = 0;
  for(int i = start; i <= end; i++)
    sum += i;
  return sum;
}

int main() {
  cout << "Sum from 1 to 10 is " << sum(1, 10) << endl;
  cout << "Sum from 35 to 49 is " << sum(35, 49) << endl;
  cout << "Sum from 25 to 1000 is " << sum(25, 1000) << endl;
}
