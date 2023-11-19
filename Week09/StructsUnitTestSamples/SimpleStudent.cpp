#include "SimpleStudent.h"

#include <iostream>

string toString(const Student& s) {
  string output;
  output += s.name;
  output += "    QuizAvg: " + to_string(s.quizAvg);
  output += "    LabAvg: " + to_string(s.labAvg);
  return output;
}

Student parseStudent(const string& data) {
  //Copy the data into a string we can modify
  string dataString = data;

  //Make the student
  Student newStudent;

  // get name
  string::size_type commaLoc = dataString.find(",");
  newStudent.name = dataString.substr(0, commaLoc);

  // get quiz score
  dataString.erase(0, commaLoc + 1); // clear everything up to first comma
  string::size_type commaLoc2 = dataString.find(",");
  string qString = dataString.substr(0, commaLoc2);

  // stoi turns a string into an int - defined in <string>
  newStudent.quizAvg = stoi(qString);

  // get lab score
  string lString = dataString.substr(commaLoc2 + 1);
  newStudent.labAvg = stoi(lString);

  return newStudent;
}


double getAverageQuizzes(const Student students[], int numStudents) {
  double total = 0;
  for(int i = 0; i < numStudents; i++) {
    total += students[i].quizAvg;
  }
  return total / numStudents;
}