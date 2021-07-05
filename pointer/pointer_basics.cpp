#include <iostream>
using namespace std;

int main()
{
    int variable = 5;

    /* syntax of pointer
        datatype *pointername
   */
    int *id;
    // int *id = &variable;
    float *fd;
    double *dd;
    char *cd;
    // pointer stores the address of the variable as value
    id = &variable;
    // '&' using sending the address/memory location

    cout << "variable value: " << variable << endl;
    cout << "address of the variable: " << id << endl;
    cout << "value of the variable using pointer: " << *id << endl;

    // update the value
    variable = 10;
    cout << endl;
    cout << "variable value: " << variable << endl;
    cout << "address of the variable: " << id << endl;
    cout << "value of the variable using pointer: " << *id << endl;

    return 0;
}
