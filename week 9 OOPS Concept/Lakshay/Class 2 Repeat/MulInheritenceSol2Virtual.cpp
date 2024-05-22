// Solution 1.Scope Resolution
#include <iostream>
using namespace std;

class Person
{
public:
    void walk()
    {
        cout << "Walking...." << endl;
    }
};

class Teacher :virtual public Person
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
    }
};

class Researcher :virtual public Person
{
public:
    void research()
    {
        cout << "Researching" << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void bore()
    {
        cout << "Boring" << endl;
    }
};

int main()
{
    // solution 1.Scope Resolution
    Professor p;
    p.walk();
    
}