#include <iostream>
using namespace std;

class abc
{
public:
    int x, y;

    abc() : x(0),y(0) {}
 
    static void Print()
    {
        cout << "I am inside Static Print" << endl;
    }
};
int main()
{
    abc::Print();
    abc obj1;
    obj1.Print();
    
    
    return 0;
}