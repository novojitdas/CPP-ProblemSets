#include <vector>
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 24, 3, 52, 1};
    int len = sizeof(arr) / sizeof(arr[0]); // size in bytes (int) // arr = total size of array
    int totalsize = sizeof(arr);
    cout << "length is: " << len << " total size: " << totalsize << endl;
    int first = 0, second = 0, third = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    cout << "First: " << first << " second: " << second << " third: " << third << endl;
    return 0;
}