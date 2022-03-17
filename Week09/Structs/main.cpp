#include <iostream>
#include <string>


using namespace std;

struct Student {
    string name;
    int quizAvg;
    int labAvg;
};


string toString(const Student& s) {
    string output;
    output += s.name;
    output += "    QuizAvg: " +  to_string(s.quizAvg);
    output += "    LabAvg: " +  to_string(s.labAvg);
    return output;
}

void increaseQuizAvg(Student& s, int newAvg) {
    s.quizAvg += newAvg;
}

Student buildEmptyStudent() {
    Student newStudent;

    newStudent.name = "???";
    newStudent.quizAvg = 0;
    newStudent.labAvg = 0;

    return newStudent;
}

//accepts string like "Bob Jones,84,92" returns student struct
Student parseStudent(string dataString) {
    Student newStudent;

    //get name
    int commaLoc = dataString.find(",");
    newStudent.name = dataString.substr(0, commaLoc);

    //get quiz score
    dataString.erase(0, commaLoc+1);  //clear everything up to first comma
    int commaLoc2 = dataString.find(",");
    string qString =  dataString.substr(0, commaLoc2);
    //stoi turns a string into an int - defined in <string>
    newStudent.quizAvg = stoi(qString);

    //get lab score
    string lString =  dataString.substr(commaLoc2 + 1);
    newStudent.labAvg = stoi(lString);

    return newStudent;
}


int main()
{
    //declare a Student s1
    Student s1;

    s1.name = "Bob Smith";
    s1.quizAvg = 84;
    s1.labAvg = 92;

    Student s2 = {"Doug Jones", 96, 100};
    cout << s2.name << " " << s2.quizAvg << endl;

    //s3 exact copy of s1
    Student s3 = s1;
    s3.name = "Dianne Jones"; //Changing copy does not affect original

//    //Not allowed
//    if(s1 == s2)
//        cout << "Same!";

//    //can't do these either
//    cin >> s2;
//    cout << s2;

    //compare grades of two students
    if(s1.quizAvg > s2.quizAvg)
        cout << s2.name << " needs help from " << s1.name << endl;

    //print entire student - have to print members
    cout << s1.name << " QuizAvg: " << s1.quizAvg
                    << " LabAvg: " << s1.labAvg << endl;

    //Or have a function to make a string for me
    cout << toString(s2) << endl;
    cout << "Increasing quiz avg by 10..." << endl;
    increaseQuizAvg(s2, 10);
    cout << toString(s2) << endl;

    Student s4 = buildEmptyStudent();
    cout << toString(s4) << endl;

    Student s5 = parseStudent("Lucia Sanchez, 98, 92");
    cout << toString(s5) << endl;
}
