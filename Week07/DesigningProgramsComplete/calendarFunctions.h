#ifndef CALENDARFUNCTIONS_H
#define CALENDARFUNCTIONS_H

// Need to include string so we can talk about it in this file
#include <string>
using namespace std;

/**
 * @brief Prints out formatted calendar for the given date
 * @param year Year to display. e.g. 2021
 * @param month Month to display. 1 = Jan, 12 = Dec
 */
void printMonth(int year, int month);

/**
 * @brief Gets formatted date string from numeric month & year
 * @param year Year to display. e.g. 2021
 * @param month Month number. 1 = Jan, 12 = Dec
 * @return String in format "April, 2021"
 */
string getTitle(int year, int month);

/**
 * @brief Turns month number into corresponding name
 * @param month Month number. 1 = Jan, 12 = Dec
 * @return Name of month. e.g. "April"
 */
string getMonthName(int month);

/**
 * @brief Prints out the table part of a calendar page
 * @param year Year to display. e.g. 2021
 * @param month Month to display. 1 = Jan, 12 = Dec
 */
void printMonthBody(int year, int month);

/**
 * @brief Get day of weekthis month starts on as a number 0-6
 * @param year e.g. 2021
 * @param month 1 = Jan, 12 = Dec
 * @return Integer representing day of week. 0 = Sunday, 6 = Saturday
 */
int getStartDay(int year, int month);

/**
 * @brief Calculate number of days in given month
 * @param year e.g. 2021 - needed for leap year
 * @param month 1 = Jan, 12 = Dec
 * @return Number of days
 */
int getDaysInMonth(int year, int month);

/**
 * @brief Calculate number of days since Jan 1st 1800 until
 *          start of given month
 * @param year e.g. 2021 - needed for leap year
 * @param month 1 = Jan, 12 = Dec
 * @return Number of days
 */
int getDaysSince1800(int year, int month);

/**
 * @brief Determines if given year is a leap year
 * @param year e.g. 2021
 * @return True if is leap year
 */
bool isLeapYear(int year);

#endif // CALENDARFUNCTIONS_H
