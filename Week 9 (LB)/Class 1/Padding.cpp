#include <iostream>
using namespace std;

class First
{
    string namee;

    int age;
    double d;

    char name;
    bool yes;
    string nameee;
};

class Second
{
    string namee;

    // 32
    int age;
    char g;
    int ages;
    double d;
    double bb;
    // 24
    string nameee;

    // 8
    bool yes;
    char name;
    int nameeeee;

    // 8
    double ddf;
};

class Test
{
    string name;

    int age;
    int weight;
    int leg;

    string lll;

    char ch;
    bool trr;

};

int main()
{
    cout << "Size of First Class : " << sizeof(First) << endl;
    cout << "Size of Second Class : " << sizeof(Second) << endl;
    cout << "Size of Test Class : " << sizeof(Test) << endl;
    return 0;
}