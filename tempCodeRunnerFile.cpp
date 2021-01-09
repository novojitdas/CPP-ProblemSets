#include <iostream>
using namespace std;

int main()
{
    int precount = 0;
    int postcount = 0;
    int pre, post;
    cin >> pre >> post;
    while (--pre) // if n=1 and need to go till n-1 th
    {
        precount++;
    }
    while (post--) // if need n th
    {
        postcount++;
    }

    cout << "precount: " << precount << endl;
    cout << "postcount: " << postcount << endl;

    return 0;
}