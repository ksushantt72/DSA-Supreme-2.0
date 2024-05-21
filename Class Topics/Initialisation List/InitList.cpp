#include <iostream>
using namespace std;

class abc
{
    int x;
    int *y;
    int *z;
    const int w = 0;

public:
    // First creating constructor to differentiate
    abc(int _x, int _y, int _z, int _w)
    {
        x = _x;
        y = new int(_y);
        z =new int(_z);
        // w=_w;       ---->>> This code will throw error because we cant reassign values to the const to initialize the const member w, use an initializer list in the constructor:
    }

    // For Reassingning value to const variable we will use initialisation list in constructor
    abc(int _x, int _y, int _z, int _w) : x(_x), y(new int(_y)), z(new int(_z)), w(_w) {}

    abc(int _x, int _y, int _z, int _w): w(_w){
        x=_x;
        y=new int(_y);
        z=new int(_z);
        //This means that we can allocate non const inside ctor and const in init. list 
    }
};

int main()
{
}