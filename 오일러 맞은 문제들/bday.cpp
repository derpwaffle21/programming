#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 400) == 0 || ((year % 100) != 0 && (year % 4) == 0);
}

int main()
{
    int year, month, day;
    int currYear = 1800, currMonth = 1, currDay = 1;
    int i = 2;

    string week[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
    int monthDay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cin >> year >> month >> day;

    while (currYear != year || currMonth != month || currDay != day)
    {
        currDay++;

        if (currDay > ((isLeapYear(currYear) && currMonth == 2) ? monthDay[currMonth - 1] + 1 : monthDay[currMonth - 1]))
        {
            currDay = 1;
            currMonth++;

            if (currMonth > 12)
            {
                currYear++;
                currMonth = 1;
            }
        }

        i++;
    }

    cout << week[i % 7] << endl;

    return 0;
}
