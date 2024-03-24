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

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teaching...." << endl;
    }
};

class Researcher : public Person
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
}