#include <iostream>

#include "GradeFunctions.h"

using namespace std;

int main() {
  // Students' answers to the questions - init all to 0
  char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS] = {{}};
  loadStudentAnswers(answers);

  // Key to the questions
  char key[] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

  // array to hold the student scores
  int scores[NUMBER_OF_STUDENTS] = {0};

  scoreQuizzes(answers, key, scores);

  printGrades(scores);
}
