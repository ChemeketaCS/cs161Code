#include <format>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  double a = 123.456789;
  cout << format("{:.2}", a) << endl;
  cout << format("{:.3}", a) << endl;
  cout << format("{:.4}", a) << endl;
  cout << format("{:.5}", a) << endl;
  cout << format("{:.20}", a) << endl;

  cout << "--------------------------" << endl;
  
  double d = 123.456789;
  cout << "Fixed decimal:" << endl;
  cout << format("{:.1f}", a) << endl;
  cout << format("{:.2f}", a) << endl;
  cout << format("{:.3f}", a) << endl;
  cout << "Scientific (floating decimal):" << endl;
  cout << format("{:.1e}", a) << endl;
  cout << format("{:.2e}", a) << endl;
  cout << format("{:.3e}", a) << endl;
}
