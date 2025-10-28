#include <iostream>

using namespace std;

int main()
{
    // Add all the numbers we count through
    int total = 0;
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        total += i;

        i++;
    }
    cout << "Those add to: " << total << endl;
}

// for (int i = 0; i < 5; i++) {
//   cout << i << endl;
//   total += i;
// }