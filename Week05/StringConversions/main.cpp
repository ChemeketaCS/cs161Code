#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1 = "12";
  string s2 = "3.14";
  cout << s1 << " " << s2 << endl;

  // Convert to numbers
  // stoi == "string to integer"
  int num1 = stoi(s1);
  // stod == "string to double"
  double num2 = stod(s2);

  cout << num1 << " " << num2 << endl;

  // Back to strings
  string s3 = to_string(num1);
  string s4 = to_string(num2);

  cout << s3 << " " << s4 << endl;

  cout << "------------" << endl;

  string s5 = "4a";
  int num3 = stoi(s5);  // OK, starts with a number
  cout << num3 << endl;

  string s6 = "a4";
  int num4 = stoi(s6);  // blows up - no number at start of string
  cout << num4 << endl;
}
