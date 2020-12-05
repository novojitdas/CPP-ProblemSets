// Your First C++ Program
#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *numcheck = new int[size];
    cin >> numcheck[size];
    for (int i = 1; i <= size; i++)
    {
        if (i = !numcheck[i])
        {
            cout << "no\n";
            break;
        }
        else
            cout << "yes\n";
        break;
    }
    return 0;
}
