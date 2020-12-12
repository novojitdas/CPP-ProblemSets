// https://www.w3resource.com/cpp-exercises/array/cpp-array-exercise-1.php
// Write a C++ program to find the largest element of a given array of integers.

#include <vector>
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 18, 3, 5, 1};
    int len = sizeof(arr) / sizeof(arr[0]); // size in bytes (int) // arr = total size of array
    int totalsize = sizeof(arr);
    cout << "length is: " << len << " total size: " << totalsize << endl;
    int temp = arr[0];
    for (int i = 0; i < len; i++)
    {

        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }

    cout << "Largest number is: " << temp << endl;
    return 0;
}