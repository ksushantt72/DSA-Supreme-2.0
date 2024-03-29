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
class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teaching..." << endl;
    }
};

// Inherit from Person
class Researcher : public Person
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

int main(){
    Professor p;
    //p.walk();
    //Diamond Problem
    //Soln 1: Scope Resolution
    p.Teacher::walk();
    p.Researcher::walk();
    
}