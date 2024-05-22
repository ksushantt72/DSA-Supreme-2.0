#include <iostream>
using namespace std;

//Operator Overloading
class Vector
{
    int x, y;

public:
    //     Vector(int x,int y){
    //         this->x=x;
    //         this->y=y;
    //}

    Vector(int x, int y) : x(x), y(y) {} // constructor using init list

    void operator+(const Vector &src)
    {
        this->x = this->x + src.x;
        this->y = this->y + src.y;
    }
    void operator-(const Vector &src)
    {
        this->x = this->x - src.x;
        this->y = this->y - src.y;
    }

    void operator++()
    {
        this->x++;
        this->y++;
    }

    void display()
    {
        cout << "x:" << x << "  " << "y:" << y << endl;
    }
};

int main()
{
    Vector v1(3, 5);
    Vector v2(4, 6);
    Vector v3(4, 6);


    // v1 + v2;
    // v1.display();

    // v1 - v2;
    // v1.display();

    // ++v1;
    // v1.display();
    
    // ++v2;
    // v2.display();

    (v3+v2);
    v3.display();

}