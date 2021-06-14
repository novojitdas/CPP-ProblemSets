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
        int plaintext = a[i];
        int keyone = 7;
        int keytwo = 2;
        int ciphertext = (plaintext * keyone + keytwo) % 26;
        cout << "\nCipher of the " << i + 1 << "st character " << ciphertext;
    }
    return 0;
}