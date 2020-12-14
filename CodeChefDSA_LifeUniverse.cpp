#include <iostream>
using namespace std;

int main()
{

    while (1) // infinite loop (1 means its a non zero number)
    {
        int i;
        cin >> i;
        if (i == 42)
            break;
        else
            cout << i << endl;
    }

    return 0;
}