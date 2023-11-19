#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Name {
    string first;
    string middle;
    string last;
};

struct Date {
    int year;
    int month;
    int day;
};

const int NUM_SCORES = 10;

struct Student {
    Name name;
    Date birthDay;
    int scores[NUM_SCORES];
};

int main()
{
    //Simple example of one Complex student
    //See code from ComplexStudentsFromFile for full example

    Student s1 = {{"Sue", "Sally", "Smith"},
                  {1994, 4, 1},
                  {96, 85, 91, 84, 87, 92, 84, 99, 97, 92}};

    s1.scores[0] = 100; //change first score

    cout << s1.name.last << ", " << s1.name.first << endl;
    cout << "   -Born: " << s1.birthDay.year << endl;
    cout << "   -Scores: ";
    for(int i = 0; i < NUM_SCORES; i++) {
        cout << setw(12) << s1.scores[i] << " ";
    }
    cout << endl;
}