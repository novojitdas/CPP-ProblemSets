#include <iostream>
using namespace std;

int main()
{
    int array[2][2];
    int array1[2][2] = {1, 2, 3, 4};                      // array with values
    int array2[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}; // array with values as rows
    int add[2][2];

    // print array1
    cout << "array1:" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    // print array2 - 3d array
    cout << "array2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the input of 2x2 array:" << endl;
    // take input of array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }

    // addition of 2 arrays
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add[i][j] = array[i][j] + array1[i][j];
        }
        cout << endl;
    }
    // print add
    cout << "output of addition matrix:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
