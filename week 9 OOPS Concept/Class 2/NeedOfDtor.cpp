#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;

    int *v;
    // Default Constructor
    Student()
    {
        cout << "Student DEFAULT ctor called" << endl;
    }

    Student(string name, int id, int age)
    {
        this->name = name;
        this->age = age;
        this->id = id;
        this->v = new int(10);
        cout << "Student Parameterized ctor Called" << endl;
    }

    // Copy constructor

    Student(const Student &srcobj)
    {
        cout << "Student Copy ctor Called" << endl;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->id = srcobj.id;
    }

    // Destructor and its use
    ~Student()
    {
        cout << "Student dtor Called" << endl;
        delete v;
    }

private:
    string gf;

};

int
main()
{
    Student s1("Sushant Kumar",2305906,19);
    cout << s1.name << endl;
}


//So destructor only deletes the memory located on heap 