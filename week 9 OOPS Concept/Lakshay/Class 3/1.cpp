#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int *q = p;

    cout << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    // cout << "*a" << *a << endl;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;
    cout << "q : " << q << endl;
    cout << "&q : " << &q << endl;
    cout << "*q : " << *q << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    cout << "arr : " << arr << endl;
    cout << "&arr : " << &arr << endl;
    cout << "&arr[0] : " << &arr[0] << endl;
    cout << "*arr : " << *arr << endl;
    cout << "*arr+1 : " << *arr + 1 << endl;
    cout << "*(arr)+1 : " << *(arr) + 1 << endl;
    cout << "*(arr+1) : " << *(arr + 1) << endl;
    cout << "*(arr+2) : " << *(arr + 2) << endl;
    cout << "*(arr+3) : " << *(arr + 3) << endl;
    cout << "arr[0] : " << arr[0] << endl;
}