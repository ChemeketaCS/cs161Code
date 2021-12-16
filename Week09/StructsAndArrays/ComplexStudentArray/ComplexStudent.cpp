#include "ComplexStudent.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;


const int NAME_COL_WIDTH = 25;
const int SCORE_COL_WIDTH = 5;

void printStudentRecord(const Student& s) {
    //use stringstream to build "last, first" into one string
    stringstream nameBuilder;
    nameBuilder << s.name.last << ", " << s.name.first;
    cout << left <<  setw(NAME_COL_WIDTH)
         << nameBuilder.str(); //print string we built up

    for(int i = 0; i < NUM_SCORES; i++) {
        cout << setw(SCORE_COL_WIDTH) << s.scores[i];
    }
    cout << endl;
}


double getAverageForAssignment(const Student studentList[],
                               int size,
                               int assignmentNum) {
    int total = 0;
    for(int studentIndex = 0; studentIndex < size; studentIndex++) {
        //get current student from list
        //  then desired score from their score list
        //  add to total
        total += studentList[studentIndex].scores[assignmentNum];
    }
    return static_cast<double>(total)/size;
}


void printStudentRecords(const Student studentList[], int size) {
    //print each student
    for(int i = 0; i < size; i++) {
        printStudentRecord(studentList[i]);
    }

    //print averages
    cout << right <<  setw(NAME_COL_WIDTH) << "Averages: ";
    cout << fixed << setprecision(1)<< left;  //reset format for avgs
    for(int i = 0; i < NUM_SCORES; i++) {
        //get average for current assignment
        double assignAvg = getAverageForAssignment(studentList, size, i);
        cout << setw(SCORE_COL_WIDTH) << assignAvg;
    }
    cout << endl;

}


void readStudents(Student studentList[], int size) {
    ifstream inFile;
    inFile.open("ComplexStudentData.txt");

    if(inFile.fail()) {
        cout << "File open error!";
        exit(0);  //Close program
    }

    for(int studentIndex = 0; studentIndex < size; studentIndex++) {
        //Read in name
        inFile >> studentList[studentIndex].name.first
               >> studentList[studentIndex].name.middle
               >> studentList[studentIndex].name.last;

        //Read in bday - file order is month day year
        inFile >> studentList[studentIndex].birthDay.month
               >> studentList[studentIndex].birthDay.day
               >> studentList[studentIndex].birthDay.year;

        //Read in the scores that each student has
        for(int j = 0; j < NUM_SCORES; j++) {
            inFile >> studentList[studentIndex].scores[j];
        }

        if(inFile.fail()) {
            cout << "File read error!";
            exit(0);  //Close program
        }

    }
}
