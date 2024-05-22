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

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
    }
};

class Researcher : public Person
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
    Professor p;
    // p.walk();
    // solution 1.Scope Resolution
    p.Teacher::walk();
    p.Researcher::walk();
}