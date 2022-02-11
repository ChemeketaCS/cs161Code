#ifndef CALENDARFUNCTIONS_H
#define CALENDARFUNCTIONS_H

//Need to include string so we can talk about it in this file
#include <string>
using namespace std;

//Refined list of things I think I want to do
void printMonth(int year, int month);

string getTitle(int year, int month);

string getMonthName(int month);

void printMonthBody(int year, int month);

int getStartDay(int year, int month);

int getDaysInMonth(int year, int month);

int getDaysSince1800(int year, int month);

bool isLeapYear(int year);

#endif // CALENDARFUNCTIONS_H
