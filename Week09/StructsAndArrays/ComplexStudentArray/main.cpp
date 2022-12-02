#include <iostream>
#include <iomanip>
#include <fstream>

#include "ComplexStudent.h"

using namespace std;


//Number of records in our file - only need this value in this file
const int NUM_STUDENTS = 30;
//Also getting constants from the .h file

int main()
{
    Student students[NUM_STUDENTS];

    readStudents(students, NUM_STUDENTS);

    printStudentRecords(students, NUM_STUDENTS);

    cout << endl << "Highest scores: " << endl;
    for(int assignNum = 0; assignNum < NUM_SCORES; assignNum++) {
        int highestScoreIndex = getHighestScorerForAssignment(students, NUM_STUDENTS, assignNum);
        cout << (assignNum + 1) << " : ";
        cout << getFirstCommaLast(students[highestScoreIndex].name);
        cout << students[highestScoreIndex].scores[assignNum] << endl;
    }
}
