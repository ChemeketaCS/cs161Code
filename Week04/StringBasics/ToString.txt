#include <iostream>
#include <string>

using namespace std;

int main() {
  double radius = 5.2;
  double area = 3.14159 * radius * radius;

  // Can't add numbers to strings
  // string badAreaString = "The area is " + area;

  string areaString = "The area is " + to_string(area);

  cout << areaString << endl;
}
