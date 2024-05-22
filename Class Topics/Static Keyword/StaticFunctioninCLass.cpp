#include <iostream>
using namespace std;

class abc
{
public:
    static int x, y;

 
    static void Print()
    {
        cout << "I am inside Static Print" << endl;
        cout << x << " "<< y << endl;
    }
};

int abc::x=0;
int abc::y=0;

int main()
{
    abc::Print();
    abc obj1;
    obj1.Print();
    
    
    return 0;
}