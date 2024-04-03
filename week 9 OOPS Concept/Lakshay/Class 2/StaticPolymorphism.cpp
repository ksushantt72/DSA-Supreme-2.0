#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}



int main()
{
    cout << add(5, 6) << endl;
    cout << add(5, 6, 7) << endl;
}