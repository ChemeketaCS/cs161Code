#include <climits>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string mystring = "bob@a.com";

  string::size_type index = mystring.find("@");

  if(index != string::npos) {
    cout << "email address";

    // front is from 0, has number chars
    //  equal to location we found @
    string front = mystring.substr(0, index);

    // rear starts at loction 1 after @,
    //  continues to end of string
    string rear = mystring.substr(index + 1);

    cout << front << endl;
    cout << rear << endl;

  } else {
    cout << "not email address";
  }
}
