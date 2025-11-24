#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<int> numbers = {1, 2, 3};
  vector<string> names = {"Alice", "Bob", "Charlie"};

  // Do not modify the code below

  for (size_t i = 0; i < numbers.size(); ++i) {
    cout << "Number: " << numbers.at(i) << endl;
  }

  cout << "--------------" << endl;

  for (size_t i = 0; i < names.size(); ++i) {
    cout << "Name: " << names.at(i) << endl;
  }
}
