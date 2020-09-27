#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

bool isLeapYear(int year);
int getNumberOfDaysOfMonth(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getStartDay(int year, int month);

void printMonthBody(int year, int month);
void printMonthTitle(int year, int month);
void printMonth(int year, int month);


#endif
