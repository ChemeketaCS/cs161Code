#include "ComplexStudent.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

const int NAME_COL_WIDTH = 25;
const int SCORE_COL_WIDTH = 5;

string getFirstCommaLast(const Name& n) {
  string output = n.last + ", " + n.first;
  return output;
}

string getStudentRecordString(const Student& s) {
  // use stringstream to build up the
  stringstream outStream;
  outStream << left << setw(NAME_COL_WIDTH);
  outStream << getFirstCommaLast(s.name);

  for(int i = 0; i < NUM_SCORES; i++) {
    outStream << setw(SCORE_COL_WIDTH) << s.scores[i];
  }

  return outStream.str();
}

double getAverageForAssignment(const Student studentList[], int size,
                               int assignmentNum) {
  int total = 0;
  for(int studentIndex = 0; studentIndex < size; studentIndex++) {
    // get current student from list
    //   then desired score from their score list
    //   add to total
    total += studentList[studentIndex].scores[assignmentNum];
  }
  return static_cast<double>(total) / size;
}

void printStudentRecords(const Student studentList[], int size) {
  // print each student
  for(int i = 0; i < size; i++) {
    cout << getStudentRecordString(studentList[i]) << endl;
  }

  // print averages
  cout << right << setw(NAME_COL_WIDTH) << "Averages: ";
  cout << fixed << setprecision(1) << left; // reset format for avgs
  for(int i = 0; i < NUM_SCORES; i++) {
    // get average for current assignment
    double assignAvg = getAverageForAssignment(studentList, size, i);
    cout << setw(SCORE_COL_WIDTH) << assignAvg;
  }
  cout << endl;
}

int getHighestScorerForAssignment(const Student studentList[], int size,
                                  int assignNumber) {
  // Assume Student 0 has the highest score
  int highestScorer = 0;
  // Search rest
  for(int i = 1; i < size; i++) {
    double curScore = studentList[i].scores[assignNumber];

    if(curScore > studentList[highestScorer].scores[assignNumber])
      highestScorer = i;
  }
  return highestScorer;
}

void readStudents(Student studentList[], int size) {
  ifstream inFile;
  inFile.open("ComplexStudentData.txt");

  if(inFile.fail()) {
    cout << "File open error!";
    exit(0); // Close program
  }

  for(int studentIndex = 0; studentIndex < size; studentIndex++) {
    // Read in name
    inFile >> studentList[studentIndex].name.first >>
        studentList[studentIndex].name.middle >>
        studentList[studentIndex].name.last;

    // Read in bday - file order is month day year
    inFile >> studentList[studentIndex].birthDay.month >>
        studentList[studentIndex].birthDay.day >>
        studentList[studentIndex].birthDay.year;

    // Read in the scores that each student has
    for(int j = 0; j < NUM_SCORES; j++) {
      inFile >> studentList[studentIndex].scores[j];
    }

    if(inFile.fail()) {
      cout << "File read error!";
      exit(0); // Close program
    }
  }
}
