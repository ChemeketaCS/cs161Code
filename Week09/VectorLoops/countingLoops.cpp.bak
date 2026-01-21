#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {10, 20, 30, 40, 50};

  for (size_t i = 0; i < nums.size(); ++i) {
    int value = nums.at(i);
    cout << "nums.at(" << i << "): " << value << endl;
  }

  for (size_t i = 0; i < nums.size(); ++i) {
    int oldValue = nums.at(i);
    nums.at(i) = oldValue * 2;
  }

  cout << "After modification:" << endl;

  for (size_t i = 0; i < nums.size(); ++i) {
    int value = nums.at(i);
    cout << "nums.at(" << i << "): " << value << endl;
  }

  // cout << "Count down:" << endl;

  // // Bad attempt...
  // for (size_t i = nums.size() - 1; i >= 0; --i) {
  //   int value = nums.at(i);
  //   cout << "nums.at(" << i << "): " << value << endl;
  // }

  // // Count down from size to 1. Use i-1 as index.
  // for (size_t i = nums.size(); i > 0; --i) {
  //   size_t index = i - 1;
  //   int value = nums.at(index);
  //   cout << "nums.at(" << index << "): " << value << endl;
  // }

  // // Count down from size-1 down. Test while i is less than size.
  // for (size_t i = nums.size() - 1; i < nums.size(); --i) {
  //   int value = nums.at(i);
  //   cout << "nums.at(" << i << "): " << value << endl;
  // }
}