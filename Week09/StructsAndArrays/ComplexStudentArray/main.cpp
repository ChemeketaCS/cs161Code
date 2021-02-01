#include <iostream>
#include <iomanip>
#include <fstream>

#include "ComplexStudent.h"

using namespace std;


//structure sizing constants
const int NUM_STUDENTS = 30;
const int NUM_GRADE_LEVELS = 5;

//grade category constants/names
enum grade {GRADE_F, GRADE_D, GRADE_C, GRADE_B, GRADE_A};
const string GRADE_LEVELS[] = {"F", "D", "C", "B", "A"};
const int GRADE_CATEGORY_MIN[] = {0, 60, 70, 80, 90};


/**
 * @brief calculateGradeCounts
 *          Fills 2D array of integers with number of A/B/C/D/F for
 *          each assignment in list provided
 * @param gradeCounts
 *          2D array - rows: assignments    cols: grade level (A/B/C/D/F)
 *          4 2 5 6 7
 *          2 4 6 7 8
 *          would indicate assignment 2 had 2 A's, 4 B's, 6 C's...
 * @param studentList
 *          array of student structs to read scores from
 * @param size number of students in array
 */
void calculateGradeCounts(int gradeCounts[][NUM_GRADE_LEVELS],
                          const Student studentList[],
                          int size) {

    //check every assignment for every student
    for(int studentIndex = 0; studentIndex < size; studentIndex++) {
        for(int assignIndex = 0; assignIndex < NUM_SCORES; assignIndex++ ) {

            int currentScore = studentList[studentIndex].scores[assignIndex];

            //Version 1: for the current assignment,
            // find appropriate letter grade and add one to that counter
            // in 2D array
            if(currentScore >= 90) {
                gradeCounts[assignIndex][GRADE_A]++;
            }
            else if(currentScore >= 80) {
                gradeCounts[assignIndex][GRADE_B]++;
            }
            else if(currentScore >= 70) {
                gradeCounts[assignIndex][GRADE_C]++;
            }
            else if(currentScore >= 60) {
                gradeCounts[assignIndex][GRADE_D]++;
            }
            else
                gradeCounts[assignIndex][GRADE_F]++;

//            //VERSION 2 - loop through each categore from A down to F
//            //            once we find a fit, increment that counter and stop
//            for(int i = GRADE_A; i >= GRADE_F; i--) {
//                if(currentScore >= GRADE_CATEGORY_MIN[i]) {
//                    gradeCounts[assignIndex][i]++;
//                    break;
//                }
//            }
        }
    }
}


/**
 * @brief printGradeCounts
 *        Prints number of A's B's C's... for each assignment
 * @param studentList array of students to retrieve data from
 * @param size number of students in array
 */
void printGradeCounts(const Student studentList[], int size) {
    //2D array to store number A/B/C/D/F for each assignment
    int assignmentGradeCounts[NUM_SCORES][NUM_GRADE_LEVELS] = {};
    //fill the array
    calculateGradeCounts(assignmentGradeCounts, studentList, size);

    //print each assignment's counts:
    for(int i = 0; i < NUM_SCORES; i++) {
        cout << "Assignment " << setw(2) << (i+1) << ": ";
        for(int j = 0; j < NUM_GRADE_LEVELS; j++) {
            cout << assignmentGradeCounts[i][j] << GRADE_LEVELS[j] << "'s ";
        }
        cout << endl;
    }
}


int main()
{
    Student students[NUM_STUDENTS];

    readStudents(students, NUM_STUDENTS);

    printStudentRecords(students, NUM_STUDENTS);

    printGradeCounts(students, NUM_STUDENTS);

}

