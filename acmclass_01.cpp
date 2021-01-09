#include <iostream>
using namespace std;

int main()
{
    int inputlimit1;
    int inputlimit2;
    int bachelors , spinster;
    cin >> inputlimit1;
    cin >> inputlimit2;
    // input
    while (inputlimit1--)
    {
        if ((inputlimit1 >= 2) && (inputlimit1 <= 60))
            cin >> bachelors;
    }
    while (inputlimit2--)
    {
        if ((inputlimit2 >= 2) && (inputlimit2 <= 60))
            cin >> spinster;
    }
    // output

    return 0;
}