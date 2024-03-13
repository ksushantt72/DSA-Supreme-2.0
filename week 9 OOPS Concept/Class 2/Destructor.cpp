#include <iostream>
using namespace std;

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

    // ctor: default ctor
    Student()
    {
        cout << "Student Constructor Called" << endl;
    }

    // Parameterized ctor called
    Student(int id, int age, bool present, string name, int nos, string gf)
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

    ~Student()
    {
        cout << "Student dtor Called" << endl;
    }




private:
    void gfChatting()
    {
        cout << " Chatting " << endl;
    }
};

int main()
{
    {
        Student s1(2305906,19,1,"Sushant",1,"None");
        cout << s1.name << endl;
    }
    Student s2;
    return 0;
}