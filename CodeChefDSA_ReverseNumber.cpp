#include <iostream>
using namespace std;

int main()
{
    int limit;
    int reminder;
    int reverse = 0;
    cin >> limit;
    while (limit--)
    {
        int input;
        cin >> input;
        while (input > 0)
        {
            reminder = input % 10;
            reverse = reverse * 10 + reminder;
            input = input / 10;
        }
        cout << reverse << endl;
        reverse = 0;
        reminder = 0;
    }

    return 0;
}