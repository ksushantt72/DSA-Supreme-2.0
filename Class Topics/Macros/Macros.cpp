#include <iostream>
using namespace std;
// for defining constants for reuse purposes
#define PI 3.1415678
// Defining code snippet for regular use throughout the code
#define MAXX(x, y) (x > y ? x : y)

float AreaOfCircle(int r)
{
    return PI * r * r;
}

float PerimeterOfCircle(int r)
{
    return 2 * PI * r;
}

void Max1()
{
    int x = 25;
    int y = 12;
    cout << MAXX(x, y) << endl;
}

void Max2()
{
    int x = 100;
    int b = 6000;
    cout << MAXX(x, b) << endl;
}



void Max3()
{
    int a = 20;
    int b = 30;
    cout << MAXX(a, b) << endl;
}




int main()
{
    // Area of circle
    cout << "Area of circle is : " << AreaOfCircle(20) << endl;

    // Perimeter of the circle
    cout << "Perimeter of circle is : " << PerimeterOfCircle(40) << endl;

    Max1();
    Max2();
    Max3();

    cout << MAXX(6,16) << endl;
}