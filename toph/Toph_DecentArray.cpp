// Your First C++ Program
#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout << "start\n";
    int i, n, temp = 0, asending = 0;
    cin >> n = 5;
    int arr[100];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= temp)
        {
            temp = arr[i];
            asending++;
        }
    }

    if (asending == n)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
