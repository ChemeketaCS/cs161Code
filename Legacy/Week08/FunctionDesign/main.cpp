#include <exception>
#include <iostream>
#include <string>

using namespace std;

bool stringToBool(const string& s)
{
  bool result = false;
  if (s == "true") {
    result = true;
  } else if (s == "false") {
    result = false;
  }
  // FIX ME 1

  return result;
}

int main()
{
  cout << "stringToBool(\"true\") = " << stringToBool("true") << endl;
  cout << "stringToBool(\"false\") = " << stringToBool("false") << endl;

  // FIX ME 2
  cout << "stringToBool(\"maybe\") = " << stringToBool("maybe") << endl;
  cout << "stringToBool(\"true\") again = " << stringToBool("true") << endl;

  // SPOT 3
  cout << "End of main()" << endl;
}
