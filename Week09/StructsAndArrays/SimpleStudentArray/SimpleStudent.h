#ifndef SIMPLESTUDENT_H
#define SIMPLESTUDENT_H

#include <string>
using namespace std;

/**
 * @brief The Student struct defines a structure to hold a student's name and
 * grade
 */
struct Student {
  string name;
  int quizAvg;
  int labAvg;
};

/**
 * @brief printStudent prints a student struct to the console
 * @param s student record to print
 */
string toString(const Student& s);

/**
 * @brief parseStudent turns a string like "Bob Jones,84,92" into a Student
 * @param dataString string in format "First Last,QuizScore,LabScore"
 * @return Student struct
 */
Student parseStudent(string dataString);

#endif // SIMPLESTUDENT_H
