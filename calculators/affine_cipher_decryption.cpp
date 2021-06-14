#include <iostream>
using namespace std;

int main()
{
    int sizeofarray;
    cin >> sizeofarray;
    for (int i = 0; i <= sizeofarray; ++i)
    {
        int a[100];
        cin >> a[i];
        int ciphertext = a[i];
        int keyinverse = 15;
        int keytwo = 2;
        int temp1 = ciphertext - keytwo;
        if (temp1 < 0)
        {
            for (int i = 0; i < 10; i++)
            {
                temp1 = temp1 + 26;
                if (temp1 > 0)
                    break;
            }
        }
        int plaintext = (temp1 * keyinverse) % 26;
        cout << "\nPlaintext of the " << i + 1 << "st character " << plaintext;
    }
    return 0;
}