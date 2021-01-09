#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 0;
    int arr[n];
    for (int input = 0; input < n; input++)
    {
        cin >> arr[input];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int output = 0; output < n; output++)
    {
        cout << arr[output] << endl;
    }
    return 0;
}