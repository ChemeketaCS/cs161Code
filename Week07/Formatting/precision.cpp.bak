#include <iostream>
#include <string>
#include <format>
using namespace std;

string formatLine(int hour, int minute, const string& name, double amount) {
    // format amount into a string with $ and 2 decimal places
    string moneyString = format("${:.2f}", amount);
    // then include the money string with 12 spaces of width
    string line = format("{:>2}:{:0>2} | {:<16} | {:>12}", hour, minute, name, moneyString);
    return line;
}

int main() {
    cout << formatLine(4, 55, "Alicia", 1234.5623) << endl;
    cout << formatLine(12, 1, "Mario", 6.32) << endl;
}
