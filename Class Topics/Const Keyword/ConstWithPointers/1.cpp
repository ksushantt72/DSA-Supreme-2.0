//1.Const content but non const Pointer

#include <iostream>
using namespace std;

int main()
{
    //1.Const content but non const Pointer

    //const int *a = new int(2);  // CONST data, NON-Const Pointer.
    int const *a = new int(2); // same as line no. 13
    //*a = 2;   //Cant chage the content of the Pointer
    // cout << *a << endl;
    int b = 20;
    a = &b; // Pointer itself can be re-assigned
    cout << *a << endl;
    return 0;
}