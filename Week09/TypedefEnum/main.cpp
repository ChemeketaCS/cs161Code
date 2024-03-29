#include <iostream>

using namespace std;

// A Weekday type can only take these values:
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

const string DAY_NAMES[5] = {"Mon", "Tues", "Wed", "Thurs", "Fri"};

// functions that take/return Weekday
void printDay(Weekday day);
Weekday getDay(string name);

int main() {
  Weekday today = FRIDAY;
  cout << "Today is " << today << endl;
  cout << "Today is " << DAY_NAMES[today] << endl;

  if(today == THURSDAY)
    cout << "Today is trash day" << endl;

  if(today < FRIDAY)
    cout << "No weekend in sight" << endl;

  //    //wrap around to monday after friday
  //    Weekday nextBusinessDay = static_cast<Weekday>(today + 1);
  //    if(nextBusinessDay > FRIDAY)
  //        nextBusinessDay = MONDAY;

  //    //loop
  //    for(Weekday d = MONDAY; d <= FRIDAY; d = static_cast<Weekday>(d+1)) {
  //        cout << DAY_NAMES[d] << " ";
  //    }
  //    cout << endl;

  //    switch(today) {
  //        case MONDAY: cout << "Mon"; break;
  //        case TUESDAY: cout << "Tue"; break;
  //        case WEDNESDAY: cout << "Wed"; break;
  //    }

  //    //call function, pass enumerated value
  //    printDay(today);

  //    string userInput;
  //    cin >> userInput;

  //    //get Weekday from function
  //    Weekday meetingDay = getDay(userInput);
  //    printDay(meetingDay);
}

void printDay(Weekday day) {
  switch(day) {
  case MONDAY:
    cout << "Monday";
    break;
  case TUESDAY:
    cout << "Tuesday";
    break;
  default:
    cout << "Other";
  }
}

Weekday getDay(string name) {
  if(name == "Monday")
    return MONDAY;
  else if(name == "Tuesday")
    return TUESDAY;
  else if(name == "Wednesady")
    return WEDNESDAY;
  else if(name == "Thursday")
    return THURSDAY;
  else if(name == "Friday")
    return FRIDAY;

  return FRIDAY; // better not reach this
}
