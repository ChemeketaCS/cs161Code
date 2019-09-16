#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    unsigned int totalSeconds = time(0);

    int secondsToday = totalSeconds % 86400;

    int hour = secondsToday / 3600;

    int secondsThisHour = secondsToday % 3600;
    int minute = secondsThisHour / 60;

    int second = secondsThisHour % 60;

    cout << hour << ":" << minute << ":" << second << endl;


    return 0;
}
