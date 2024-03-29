#include <iostream>
#include <string>
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
        cout << "Teaching...." << endl;
    }
};

class Researcher :virtual public Person
{
public:
    void Research()
    {
        cout << "Researching...." << endl;
    }
};

// Multiple Inheritance
class Professor : public Teacher, public Researcher
{
public:
    void bore()
    {
        cout << "Boring...." << endl;
    }
};

int main()
{
    Professor p;
    p.bore();
    p.Research();
    p.teach();
    //Scope Resolution for Inheriting Person's  Behaviour in Professor through Teacher or researcher
    // p.Teacher::walk();
    // p.Researcher::walk();

    //In virtual Method we will just use virtual before public while creating class from which this class is derived
    //Refer to line 14 and line 23
    //this tells us that we are inheriting teacher and researcher class virtually
    //now when will inherit Professor multiply we can use person's state or behaviour directly

    //These are the two ways of solving Diamond Problem 
    //1.Scope Resolution
    //2.Virtual Method
}