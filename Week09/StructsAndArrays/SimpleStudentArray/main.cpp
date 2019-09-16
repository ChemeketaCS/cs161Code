#include <iostream>
#include <iomanip>
#include <fstream>

#include "SimpleStudent.h"

using namespace std;


int main()
{
    ifstream inFile;
    inFile.open("SimpleStudentData.txt");

    if(inFile.fail()) {
        cout << "File open error!";
        exit(0);  //Close program
    }

    const int NUM_STUDENTS = 10;
    //declare an array of 10 students:
    Student students[NUM_STUDENTS];
    for(int i = 0; i < NUM_STUDENTS; i++) {
        string temp;
        getline(inFile, temp);  //read one line of file

        if(inFile.fail()) {
            cout << "File read error!";
            exit(0);  //Close program
        }

        students[i] = parseStudent(temp);
    }

    //change 2nd student's name:
    students[1].name = "Zoro";

    for(int i = 0; i < NUM_STUDENTS; i++) {
        printStudent(students[i]);
    }

    return 0;
}
