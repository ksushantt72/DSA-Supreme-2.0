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

    // Constructor is the only function in the c++ that has no return type
    // Short form of constructor is ctor
    // it constructs an instance of class

    // ctor: default ctor
    Student()
    {
        cout << "Student Constructor Called" << endl;
    }

    // Parameterized ctor called
    Student(int id, int age, bool present, string name, int nos, string _gf)
    {
        // PLease try to understand (this->) as it is the part of syntax
        //(this->) is used to remove underscore
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        cout << "Parameterized Ctor Called" << endl;
    }

    // ctor w/o gf called
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        cout << "Parameterized Ctor without gf Called" << endl;
    }

    // Copy Ctor
    Student(const Student &srcobj)
    {
        cout << "Student Copy Ctor Called" << endl;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->id = srcobj.id;
        this->present = srcobj.present;
        this->nos = srcobj.nos;
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
    // Copy Ctor
    Student s1(2305906, 19, 1, "Sushant", 5, "None");
    // Copy Ctor
    //Student s2 = s1;
    Student s2(s1);

    //ln 92 and 93 are the ways for calling copy ctor

    cout << s1.name << endl; // Output--> Sushant
    cout << s2.name << endl; // Output--> Sushant

    return 0;
}