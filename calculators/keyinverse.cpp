#include <iostream>
using namespace std;

int main()
{
    int key;
    cout << "Please enter the value of key:";
    cin >> key;
    int a[12] = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int temp;
    int keyInverse;

    for (int i = 0; i < 12; ++i)
    {
        keyInverse = a[i];
        temp = (key * a[i]) % 26;
        if (temp == 1)
            break;
    }

    cout << "\n our key value was " << key << " and our key inverse is :" << keyInverse;
    return 0;
}