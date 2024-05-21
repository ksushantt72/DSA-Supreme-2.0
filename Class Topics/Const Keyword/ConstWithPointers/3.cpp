//3.CONST pointer CONST Content
#include <iostream>
using namespace std;

int main()
{
    // 3.CONST pointer CONST Content
    const int *const a = new int(5);
    //*a = 25; // Not Possible
    cout << *a << endl;
    int b = 500;
    // a = &b; // not Possible
    return 0;
}