#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<vector<vector<double>>> oceanTemps = {
      //layer 1
      {
        {64.2, 65.3, 66.4},
        {67.5, 68.6, 69.7},
        {70.8, 71.9, 73.0}
      },
      //layer 2
      {
        {54.2, 55.3, 56.4},
        {57.5, 58.6, 59.7},
        {60.8, 61.9, 63.0}
      },
    };


    // assume that the data is rectangular
    size_t depthCount = oceanTemps.size();
    size_t latitudeCount = oceanTemps.at(0).size();
    size_t longitudeCount = oceanTemps.at(0).at(0).size();

    for (size_t depth = 0; depth < depthCount; ++depth) {
        cout << "Depth " << depth << ":" << endl;
        for (size_t lat = 0; lat < latitudeCount; ++lat) {
            for (size_t lon = 0; lon < longitudeCount; ++lon) {
                cout << oceanTemps.at(depth).at(lat).at(lon) << " ";
            }
            cout << endl;
        }
        cout << "---------------------" << endl;
    }
}
