#include <iostream>

#include "GradeFunctions.h"

using namespace std;


int main()
{
    const int A_BUCKET = 4,
              B_BUCKET = 3,
              C_BUCKET = 2,
              D_BUCKET = 1,
              F_BUCKET = 0;

    const int NUM_STUDENTS = 30;
    int scores[NUM_STUDENTS];

    //populate the scores randomly
    fillRandomScores(scores, NUM_STUDENTS);

    cout << "Student scores: " << endl;
    printArray(scores, NUM_STUDENTS);
    cout << endl;

    //array to hold number of each grade
    int gradeCounts[5] = {0};

    //loop through the students
    for(int i = 0; i < NUM_STUDENTS; i++) {
        int currentScore = scores[i];
        if(currentScore < 60)
            gradeCounts[F_BUCKET]++;
        else if(currentScore < 70)
            gradeCounts[D_BUCKET]++;
        else if(currentScore < 80)
            gradeCounts[C_BUCKET]++;
        else if(currentScore < 90)
            gradeCounts[B_BUCKET]++;
        else
            gradeCounts[A_BUCKET]++;
    }


    cout << "A's: " << gradeCounts[A_BUCKET] << endl;
    cout << "B's: " << gradeCounts[B_BUCKET] << endl;
    cout << "C's: " << gradeCounts[C_BUCKET] << endl;
    cout << "D's: " << gradeCounts[D_BUCKET] << endl;
    cout << "F's: " << gradeCounts[F_BUCKET] << endl;


}
