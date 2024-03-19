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
        cout << "Student DEFAULT Constructor Called" << endl;
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

    // GETTER
    // from this we can access private Variables
    string getGFname()
    {
        // return gf;
        return this->gf;
    }

    // SETTER
    // From this you can change gf name
    void setGFname(string gf)
    {
        this->gf = gf;
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

    // Calling dtor
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
    // Accessing Private Variables or Function of OOPS
    // We Will use Getter Setter Method;
    Student s1(2305906, 19, 1, "Sushant", 7, "None");
    cout << s1.getGFname() << endl;     //Getter

    s1.setGFname("Never");              //Setter
    cout << s1.getGFname() << endl;     //Getter

    return 0;
}