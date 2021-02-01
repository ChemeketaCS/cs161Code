#include <iostream>
using namespace std;

int main()
{
    const int NUMBER_OF_DAYS = 10;
    const int NUMBER_OF_HOURS = 24;
    double data[NUMBER_OF_DAYS][NUMBER_OF_HOURS][2];


    int day, hour;
    double temperature, humidity;
    for (int k = 0; k < NUMBER_OF_DAYS * NUMBER_OF_HOURS; k++)
    {
        cin >> day >> hour >> temperature >> humidity;
        data[day - 1][hour - 1][0] = temperature;
        data[day - 1][hour - 1][1] = humidity;
    }

    // Find the average daily temperature and humidity
    for (int i = 0; i < NUMBER_OF_DAYS; i++)
    {
        double dailyTemperatureTotal = 0, dailyHumidityTotal = 0;
        for (int j = 0; j < NUMBER_OF_HOURS; j++)
        {
            dailyTemperatureTotal += data[i][j][0];
            dailyHumidityTotal += data[i][j][1];
        }

        // Display result
        cout << "Day " << i << "'s average temperature is "
             << dailyTemperatureTotal / NUMBER_OF_HOURS << endl;
        cout << "Day " << i << "'s average humidity is "
             << dailyHumidityTotal / NUMBER_OF_HOURS << endl;
    }

}
