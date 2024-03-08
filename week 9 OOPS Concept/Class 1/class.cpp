#include <iostream>
using namespace std;

// by default every object inside a class is private
// but you can make it public

class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    // Syntax Part of Constructor(ctor)
    Student()
    {
        cout << "Student ctor called" << endl;
    }

    void study()
    {
        cout << "Studying" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    void bunk()
    {
        cout << "Bunking" << endl;
    }

private:
    void gfChatting()
    {
        cout << " Chatting " << endl;
    }
};

int main()
{
    // class is a custom datatype just like integer character datatype
    cout << "Size of Student Class :" << sizeof(Student) << endl;

    Student s1;
    s1.name = "Sushant kumar";
    s1.age = 19;
    s1.id = 2305906;
    s1.present = 1;

    // Student s2;
    // s2.name = "Nishant kumar";
    // s2.age = 20;
    // s2.id = 23051843;
    // s2.present = 0;

    // Constructor is the only function in the c++ that has no return type
    // Short form of constructor is ctor
    // it constructs an instance of class
}