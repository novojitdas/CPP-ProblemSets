#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter decimal Number:";
    cin >> decimal;
    int binary = 0;
    int remainder, product = 1;

    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }

    // while exit
    cout << "Binary Number = " << binary;

    return 0;
}