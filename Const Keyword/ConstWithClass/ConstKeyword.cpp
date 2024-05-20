#include <iostream>
using namespace std;

class integers
{
    //mutable int x;                  
    //Mutable keyword helps it to be modified inside const function too
    //Generally mutable keyword is used for debugging purposes only 
    int x;
    int *y;
    int z;

public:
    // Parametrised constructor
    //Default aargument is the argument that we pass to the variable in function itself
    //here int_z = 0; is default argument passed
    //if at the time of function call we pass  100 then it will overide the default argument 
    integers(int _x, int _y, int _z = 0)
    {
        x = _x;
        *y = _y;
        z = _z;
    }
    // Getter setter for x
    int getx() const
    {
        // x=50;               //--->>> this is not possible because the getx func is set as const.
        return x;
    }

    void setx(int _val)    //If i have to set value instead it is const function , we need to initialise that //integer as mutable
    {   
        x = _val;
    }
    // Getter setter For y
    int gety() const
    {
        int f = 200;
        // y=&f;             //--->>>This is not possible because the gety func. is set as const
        return *y;
    }

    void sety(int _val)
    {
        *y = _val;
    }
    int getz() const
    {
        return z;
    }
};

void PrintIntegers(const integers &a)
{   
    cout << a.getx() << " " << a.gety() << " " << a.getz() << endl;
}

int main()
{
    integers a(1, 2,100);
    PrintIntegers(a);
}