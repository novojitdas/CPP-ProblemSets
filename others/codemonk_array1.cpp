// Problem Name: Monk and Rotation(array)
// link: https://www.hackerearth.com/practice/codemonk/
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--) // t = 1, here in the problemset
    // 1)while condition will satisfied as 1
    // 2) t-- will happen as post decrement, will become 0.
    // 3) which will not executed later, because while(0) is always false & never execute.
    {
        int n, k, p;
        cin >> n;
        cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k = k % n;
        for (int i = 0; i < n; i++)
        {
            p = a[(i + (n - k)) % n];
            cout << p << " ";
        }
    }

    return 0;
}