#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1 = "Dog";
  string s2 = "cat";
  string s3 = s2;

  string s4 = s1 + s2; // Dogcat
  cout << s4 << endl;

  string s5 = s1 + " and " + s2; // Dog and cat
  cout << s5 << endl;
}
