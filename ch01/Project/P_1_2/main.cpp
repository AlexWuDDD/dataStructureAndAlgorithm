#include "test.h"


int main()
{
    cout << "please input year(e.g. 2020): ";
    int year = 0;
    cin >> year;
    cout << "please input month(1 ~ 12): ";
    int month = 0;
    cin >> month;
    printMonth(year, month);
    
    return 0;
}
