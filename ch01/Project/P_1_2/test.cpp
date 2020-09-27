#include "test.h"


bool isLeapYear(int year)
{
    return year%400==0 || (year%4==0 && year%100!=0);
}

int getNumberOfDaysOfMonth(int year, int month)
{
    int ret = 0;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ret = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ret = 30;
            break;
        case 2:{
            ret = isLeapYear(year)?29:28;
            break;
        }
        default:
            break;
    }
    return ret;
}

int getTotalNumberOfDays(int year, int month)
{
    int total = 0;
    for(int i = 1800; i < year; ++i){
        if(isLeapYear(i)){
            total += 366;
        }
        else{
            total += 365;
        }
    }
    for(int i = 1; i < month; ++i){
        total += getNumberOfDaysOfMonth(year, i);
    }
    return total;
}

int getStartDay(int year, int month)
{
    int startDay1800 = 3;
    int totalNumberOfDays = getTotalNumberOfDays(year, month);
    return (totalNumberOfDays + startDay1800)%7;
}

void printMonthBody(int year, int month)
{
    int startDay = getStartDay(year, month);
    int numberOfDaysInMonth = getNumberOfDaysOfMonth(year, month);
    int i = 0;
    for(i = 0; i < startDay; ++i){
        cout << "    ";
    }
    for(i = 1; i <= numberOfDaysInMonth; ++i){
        cout << std::setw(4) << i;
        if((i+startDay)%7 == 0){
            cout << endl;
        }
    }
    cout << endl;
    cout << "------------------------------" << endl;
}

void printMonthTitle(int year, int month)
{
    char chMonth[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dev"};
    cout << endl;
    cout << std::setw(15) << year << "-";
    cout << chMonth[month-1] << endl;
    cout << "------------------------------" << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
}

void printMonth(int year, int month)
{
    printMonthTitle(year, month);
    printMonthBody(year, month);
}

