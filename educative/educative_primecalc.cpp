#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Type a number: ";
    cin >> number;
    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }

    for (int counter = 2; counter <= number / 2; counter++)
    {
        if (number % counter == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Number is prime";
    }
    else
        cout << "Number is not prime";

    return 0;
}