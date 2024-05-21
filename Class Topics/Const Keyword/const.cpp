#include <iostream>
using namespace std;

int main()
{

    // conclusion
    // 1. If * comes after const then (Content->Const) and (Pointer->non-const)
    // Here two ways of writing are possible
    // int const*a = new int(5);
    // const int*a = new int(5);
    // 2. if * comes before const then (content -> non-const) and (Pointer->const)
    // Here one way of writing is possible only
    // int *const a = new int(5);
    //3. if * comes in between const then (content -> non-const) and (Pointer->non-const)
    //const int *const a = new int(5);

    return 0;
}