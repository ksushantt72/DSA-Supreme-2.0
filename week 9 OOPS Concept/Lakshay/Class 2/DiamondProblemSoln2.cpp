#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    void walk()
    {
        cout << "Walking..." << endl;
    }
};

// Inherit from person
class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};

// Inherit from Person
class Researcher : virtual public Person
{
public:
    void research()
    {
        cout << "Researching..." << endl;
    }
};

// Multiple Inheritence from both teacher and researcher class
class Professor : public Teacher, public Researcher
{
public:
    void bore()
    {
        cout << "Boring..." << endl;
    }
};

int main()
{
    Professor p;
    // p.walk();
    // Diamond Problem
    // Soln 2: Virtual Inherit Method
    p.walk();


}