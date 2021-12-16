#include <iostream>

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

struct Student {
    Name name;
    Date birthDay;
    int quizAvg;
    int labAvg;
};

void printDate(const Date& theDate) {
    cout << theDate.month << "/"
         << theDate.day << "/"
         << theDate.year << endl;
}

void printStudent(const Student& theStudent) {
    cout << theStudent.name.last << ", " << theStudent.name.first << endl;
    cout << "  Born: ";
    printDate(theStudent.birthDay);
    cout << "  Averages: " << theStudent.labAvg << " " << theStudent.quizAvg << endl;
}

int main()
{
    Date d1 = {1992, 12, 14};
    Name n1 = {"John", "Jacob", "Jones"};
    Student s1 = {n1, d1, 95, 85};

    //Change s1's name:
    s1.name.first = "Jack";
    //Change s1's lab average
    s1.labAvg = 88;


    printStudent(s1);

    Student s2 = {{"Sue", "Sally", "Smith"},
                  {1994, 4, 1},
                  94, 86};

    printStudent(s2);

}



