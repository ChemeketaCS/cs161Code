#include <iostream>
#include <iomanip>

using namespace std;

int sum(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
        sum += i;
    return sum;
}

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += i;
    cout << "Sum from 1 to 10 is " << sum << endl;

    sum = 0;
    for (int i = 35; i <= 49; i++)
        sum += i;
    cout << "Sum from 35 to 49 is " << sum << endl;

    sum = 0;
    for (int i = 25; i <= 1000; i++)
        sum += i;
    cout << "Sum from 25 to 1000 is " << sum << endl;
}
