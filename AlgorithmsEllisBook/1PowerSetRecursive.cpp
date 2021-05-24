// A recursive algorithm to generate power set
#include <bits/stdc++.h>
using namespace std;
// str - input string, curr - current subset, index - index in current subset
void powerSet(string str, int index = -1, string curr = "")
{
    int n = str.length();

    // test
    if (index == n)
        return;

    // print current subset
    cout << curr << "\n";
    // Try appending remaining characters
    // to current subset
    for (int i = index + 1; i < n; i++)
    {
        curr += str[i];
        powerSet(str, i, curr);
        curr.erase(curr.size() - 1);
    }
    return;
}
int main()
{
    string str = "abc";
    powerSet(str);
    return 0;
}
