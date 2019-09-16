#ifndef COMPLEXSTUDENT_H
#define COMPLEXSTUDENT_H

#include <string>

struct Name {
    std::string first;
    std::string middle;
    std::string last;
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


/**
 * @brief printStudentRecord Prints formatted line with student grades
 * @param s Student to print
 */
void printStudentRecord(const Student& s);

/**
 * @brief printStudentRecords
 *          Prints record of each student in given array
 *          Followed by assignment averages
 * @param studentList array of students to print
 * @param size number of students in array
 */
void printStudentRecords(const Student studentList[], int size);

/**
 * @brief getAverageForAssignment Calculate mean grade on an assignment
 * @param studentList array of student records
 * @param size number of students in array
 * @param assignmentNum which score to find average of
 * @return mean value
 */
double getAverageForAssignment(const Student studentList[],
                               int size,
                               int assignmentNum);


/**
 * @brief readStudents
 *        Reads in students data from file complexData.txt
 * @param studentList array to fill with data from file
 * @param size number of students to read
 */
void readStudents(Student studentList[], int size);


#endif // COMPLEXSTUDENT_H
