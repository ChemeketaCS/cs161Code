#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1 = "Dog";
  string s2 = "cat";
  string s3 = "Cat";

  string s4 = 'a' + s1;     // OK
  string s5 = 'a' + "cat";  // NO

  string s6 = "Sleepy " + s2;
  string s7 = "Sleepy " + " cat";
}
