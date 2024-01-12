/**
 * @author Andrew Scholer
 * @brief Unit tests for studentTester
 */

//-----------------------------------------------------------------------------------
// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this line
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;
//-----------------------------------------------------------------------------------

#include "SimpleStudent.h"

using namespace std;

// Test a function that creates a student
TEST_CASE("parseStudent") {
  Student s1 = parseStudent("Bob Jones,84,92");
  CHECK(s1.name == "Bob Jones");
  CHECK(s1.quizAvg == 84);
  CHECK(s1.labAvg == 92);
}

// A globally defined const array of students
// Can be used in any of the tests
const Student TEST_STUDENTS[3] = {
    {"Bob Jones", 84, 92}, 
    {"Suzie Chavez", 94, 88}, 
    {"Reggie Smith", 90, 89}
};

TEST_CASE("toString") {
  // Use the first student from students to test:
  string s1String = toString(TEST_STUDENTS[0]);
  CHECK(s1String == "Bob Jones    QuizAvg: 84    LabAvg: 92");

  // Use the second student from students to test:
  string s2String = toString(TEST_STUDENTS[1]);
  CHECK(s2String == "Suzie Chavez    QuizAvg: 94    LabAvg: 88");
}

TEST_CASE("getAverageQuizzes") {
  // Use the test array
  double average = getAverageQuizzes(TEST_STUDENTS, 3);
  CHECK(average == Approx(89.333333333));

  // Give the function the array and just pretend it only has
  //  two elements - should just average two students
  double average2 = getAverageQuizzes(TEST_STUDENTS, 2);
  CHECK(average2 == Approx(89));
}