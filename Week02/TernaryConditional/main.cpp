#include <iostream>

using namespace std;

int main() {
  cout << "Enter number of monkeys: ";

  int monkeys;
  cin >> monkeys;

  cout << "You chose " << monkeys << ((monkeys > 1) ? " monkeys" : " monkey")
       << endl;
}
