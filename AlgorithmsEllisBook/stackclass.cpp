#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    int arr[5]; // here arr is an array
    int top;    // and top is like index number
public:
    Stack() // stack is a constructor,
    {       // and it calls when the object is created
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty() // true if the stack is empty
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull() // true if the stack is full
    {
        if (top == 4) // last index=n-1, where array size is n
            return true;
        else
            return false;
    }
    void push(int val) // push doesn't return any value, so void ReturnType
    {
        if (isFull())
        {
            cout << "Stack is Full, can't push new value" << endl;
        }
        else
        {
            top++; // top = top + 1;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, can't pop any value" << endl;
            return 0;
        }
        else
        {
            int temp = arr[top]; // moving the current value into temp variable
            arr[top] = 0;        // manually poping the value with zero
            top--;
            return temp;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int position)
    {
        if (isEmpty())
        {
            cout << "\nSorry! stack is empty can't be peeked" << endl;
            return 0;
        }
        else
            return arr[position];
    }
    void change(int position, int val)
    {
        arr[position] = val;
        cout << "value changed in index " << position << "th position with " << val << endl;
    }
    void display()
    {
        cout << "all values of stack are" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option, position, value;

    do
    {
        cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to push in the stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "Stack is Empty" << endl;
            else
                cout << "Stack is not Empty" << endl;
            break;
        case 4:
            if (s1.isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;
        case 5:
            cout << "Enter position of item you want to peek: " << endl;
            cin >> position;
            cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
            break;
        case 7:
            cout << "Change Function Called - " << endl;
            cout << "Enter position of item you want to change : ";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change : ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display Function Called - " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
}