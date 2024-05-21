// 2.Const Pointer but non const Content
#include <iostream>
using namespace std;

int main()
{
    // 2.Const Pointer but non const Content
    int *const a = new int(5);
    *a = 25; // this is possible because content can be reassigned
    cout << *a << endl;

    int b = 500;
    // a = &b; // Not possible because here pointer is constant
    return 0;
}