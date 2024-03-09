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
        //PLease try to understand (this->) as it is the part of syntax
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
    cout << "Size of Student Class :" << sizeof(Student) << endl;

    // Default ctor;
    Student s1;

    cout << endl; 

    // Parameterized ctor;
    Student s2(2305906, 19, 1, "Sushant", 7, "None");
    // Now Accessig Instance of Student s2
    cout << "Id: " << s2.id << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Is Present: " << s2.present << endl;
    cout << "Nos: " << s2.nos << endl;
    // s2 << endl.gfname;   --->> This cant be Accessed becase this is private in line 10

    cout << endl;

    Student s3(23051843, 20, 1, "Nishant", 7);
    // Now Accessig Instance of Student s2
    cout << "Id: " << s3.id << endl;
    cout << "Age: " << s3.age << endl;
    cout << "Name: " << s3.name << endl;
    cout << "Is Present: " << s2.present << endl;
    cout << "Nos: " << s3.nos << endl;

    //this is similar to 
    int *a=new int(5);

    //AlLocating Student class on Heap
    Student *s4 = new Student(23059066,21,1,"Naif",6);
    //cout << s4.name << endl;
    cout << s4->name << endl;
    cout << (*s4).name << endl;


    return 0;
}