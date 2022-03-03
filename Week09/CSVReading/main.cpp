#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Person {
    int id;
    string name;
    double gps_latitude;
    string address;
};


int main()
{
    ifstream inFile("data.csv");
    if(inFile.fail()) {
        cout << "File open error!";
        exit(0);  //Close program
    }

    //Our list of persons
    Person people[2];
    //We will use example 1 to read the first and example 2 to read the second

    //Example 1
    //---------------------------------------------------
    //Read in each line as a string - then need to chop up using find & substr
    string line;
    getline(inFile, line);

    int commaLoc = line.find(",");
    string idString = line.substr(0, commaLoc);
    line.erase(0, commaLoc + 1);

    commaLoc = line.find(",");
    string name = line.substr(0, commaLoc);
    line.erase(0, commaLoc + 1);

    commaLoc = line.find(",");
    string gps_string = line.substr(0, commaLoc);
    line.erase(0, commaLoc + 1);

    string address = line; //rest of line

    people[0].id = stoi(idString);
    people[0].name = name;
    people[0].gps_latitude = stod(gps_string);
    people[0].address = address;
    //repeat over and over...


    //Example 2
    //---------------------------------------------------
    //Use getline to read until each comma
    inFile.close();                 //close/reopen file to restart reading

    inFile.open("data.csv");
    string ignore;
    getline(inFile, ignore);        //read first line and ignore it

    string line2;
    getline(inFile, line);          //read second line

    //Make a streingstream so we can read from the string like a file
    stringstream lineParser(line2);

    string part1, part2, part3, part4;
    getline(lineParser, part1, ',');    //read from lineParser until ,
    getline(lineParser, part2, ',');    //read from lineParser until ,
    getline(lineParser, part3, ',');    //read from lineParser until ,
    getline(lineParser, part4);         //read until end of line

    people[1].id = stoi(part1);
    people[1].name = part2;
    people[1].gps_latitude = stod(part3);
    people[1].address = part4;
    //repeat over and over...

    for(int i = 0; i < 2; i++) {
        cout << people[i].name << "(" << people[i].id << ")" << endl;
        cout << people[i].address << "(" << people[i].gps_latitude << ")" << endl;
    }


}
