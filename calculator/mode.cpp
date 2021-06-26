#include <iostream>
using namespace std;

int main()
{
    int array[6];
    cout << "enter 6 numbers:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    int arraysize = 6;
    int number = array[0];
    int mode = number; // assuming first number as a mode value
    int count = 1;     // normally a counter
    int countMode = 1; // count the mode (biggest repeatation)

    for (int i = 1; i < arraysize; i++)
    {
        if (array[i] == number) // if the both index matches (current==previous)
        {
            ++count;
        }
        if (count > countMode) // if count>countMode, then counts repeats most times
        {
            countMode = count; // update the countMode with new one
            mode = number;     // last number was biggest repeatation
        }
        count = 1;         // reset the count value
        number = array[i]; // number is not matched, so update the number with current i.
    }

    if (countMode == 1) // for all different values, default value will be mod / maximum value
    {
        mode = 28; // default date of period
    }
    cout << "Mode :" << mode << endl;
    return 0;
}