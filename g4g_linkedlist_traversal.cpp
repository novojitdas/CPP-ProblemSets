#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // its a variable
    Node *next; // its a pointer, Syntax:" Data-Type* Pointer; "
                // could be int, float,class itself
};

int printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{

    Node *head = NULL; // initial as null
    Node *second = NULL;
    Node *third = NULL;

    head = new Node(); // syntax: variable = new type-name();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}