#include "GradeFunctions.h"

#include <fstream>
#include <iostream>

using namespace std;

void loadStudentAnswers(char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS]) {
  ifstream inFile("scores.txt");

  if (!inFile.is_open()) {
    cout << "Error opening scores.txt - check working directory" << endl;
    exit(1);  // kill program
  }

  for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
    for (int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
      inFile >> answers[i][j];
    }
  }

  if (inFile.fail()) {
    cout << "Error reading scores.txt - check file" << endl;
    exit(1);  // kill program
  }
}

void scoreQuizzes(const char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS],
                  const char key[NUMBER_OF_QUESTIONS],
                  int scores[NUMBER_OF_STUDENTS]) {
  for (int studentNum = 0; studentNum < NUMBER_OF_STUDENTS; studentNum++) {
    // Make sure we start from zero for this student
    scores[studentNum] = 0;
    for (int questionNum = 0; questionNum < NUMBER_OF_QUESTIONS;
         questionNum++) {
      if (answers[studentNum][questionNum] == key[questionNum]) {
        scores[studentNum]++;
      }
    }
  }
}

void printGrades(const int scores[NUMBER_OF_STUDENTS]) {
  for (int studentNum = 0; studentNum < NUMBER_OF_STUDENTS; studentNum++) {
    cout << "Student " << (studentNum + 1) << " got " << scores[studentNum]
         << endl;
  }
}
