#include <iostream>

using namespace std;

// Global namespace ::foo
int foo() {
  return 9000;
}

namespace Library1 {
// Library1::foo
int foo() {
  return 42;
}
} // namespace Library1

namespace Library2 {
// Library2::foo
int foo() {
  return -1;
}
} // namespace Library2

int main() {
  cout << ::foo() << endl; // global foo
  cout << Library1::foo() << endl;
  cout << Library2::foo() << endl;

  using Library1::foo;
  cout << foo() << endl; // Library1::foo
}
