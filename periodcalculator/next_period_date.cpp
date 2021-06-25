#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int month, year;
    int day, n_days, cycle = 28; // period cycle = 28 days

    cout << "Enter the year:";
    cin >> year;
    cout << endl;

    cout << "Enter the month:";
    cin >> month;
    cout << endl;

    cout << "Enter the date of your first bleeding:";
    cin >> day;
    cout << endl;

    switch (month)
    {
    case 2:

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))

            n_days = 29;

        else
            n_days = 28;

        break;
    case 4:
    case 6:
    case 9:
    case 11:
        n_days = 30;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        n_days = 31;
        break;
    }
    int result, test = 7;

    while (--test)
    {
        int a = n_days - day; // first date of p - last date of month
        if (a <= 28)
        {
            month = month + 1;
            if (month == 13)
            {
                month = 1;
                year = year + 1;
            }
            result = cycle - a;
            if (result == 0)
                result = 1;
        }
        else
        {
            result = day + 28;
        }
        cout << "Your next period date is probably after " << result << "/" << month << "/" << year << endl;

        switch (month)
        {
        case 2:

            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))

                n_days = 29;

            else
                n_days = 28;

            break;
        case 4:
        case 6:
        case 9:
        case 11:
            n_days = 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_days = 31;
            break;
        }
        day = result;
    }
    return 0;
}