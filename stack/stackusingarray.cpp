#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack
{
private:
    int top;

public:
    int a[MAX];
    Stack()
    {
        int top = -1;
    }
    bool isEmpty()
    {
        return (top < 0); // will return true if top is less than 0
    }
    bool push(int x)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow";
            return false;
        }
        else
        {
            a[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }
} int pop()
{
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        int temp = a[top];
        a[top] = 0;
        top--;
        return temp;
    }
}
int peek()
{
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        int temp = a[top];
        return temp;
    }
}
}
;

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}