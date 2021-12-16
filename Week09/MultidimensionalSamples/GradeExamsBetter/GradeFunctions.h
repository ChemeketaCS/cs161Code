#ifndef GRADEFUNCTIONS_H
#define GRADEFUNCTIONS_H

//Define constants here for us in any .cpp that includes this
const int NUMBER_OF_STUDENTS = 8;
const int NUMBER_OF_QUESTIONS = 10;

/**
 * @brief loadStudentAnswers Get data for all student's answers to quiz questions
 * @param answers 2D array that will be filled with student responses to quiz
 *                  rows represent students, cols questions
 */
void loadStudentAnswers(char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS]);


/**
 * @brief scoreQuizzes Grade each student's answers agains the key
 * @param answers 2D array - rows = students, cols = questions
 * @param key Correct answers to each question
 * @param scores Array where we will store total score for each student
 */
void scoreQuizzes(const char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS],
                  const char key[NUMBER_OF_QUESTIONS],
                  int scores[NUMBER_OF_STUDENTS]);

/**
 * @brief printGrades Print each student's score
 * @param scores Array containing calculated scores
 */
void printGrades(const int scores[NUMBER_OF_STUDENTS]);

#endif // GRADEFUNCTIONS_H
