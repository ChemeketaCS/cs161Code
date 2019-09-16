#include <iostream>

#include "SimpleStudent.h"

void printStudent(const Student& s) {
    cout << s.name << "\tQuizAvg: " << s.quizAvg
                   << "\tLabAvg: " << s.labAvg << endl;
}

Student parseStudent(string dataString) {
    Student newStudent;

    //get name
    unsigned int commaLoc = dataString.find(",");
    newStudent.name = dataString.substr(0, commaLoc);

    //get quiz score
    dataString.erase(0, commaLoc+1);  //clear everything up to first comma
    unsigned int commaLoc2 = dataString.find(",");
    string qString =  dataString.substr(0, commaLoc2);
    //stoi turns a string into an int - defined in <string>
    newStudent.quizAvg = stoi(qString);

    //get lab score
    string lString =  dataString.substr(commaLoc2 + 1);
    newStudent.labAvg = stoi(lString);

    return newStudent;
}
