#include <iostream>
using namespace std;

// Creating Student Class
class Student
{
public:
    string name;
    int roll;
    int age;

    // Creating Parameterized Constructor
    Student(string name, int roll, int age)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
};

int main()
{
    // Allocation of Student class on Stack
    Student s1("Sushant", 19, 2305906);

    cout << "Name:" << s1.name << endl;
    cout << "Roll No:" << s1.roll << endl;
    cout << "Age:" << s1.age << endl;

    cout << endl;

    // Allocation of Student class on Heap(Important)
    Student *s2 = new Student("Nishant", 23051843, 20);

    // cout << "Name Method 1:" << s2.name;
    cout << "Name Method 2:" << s2->name << endl;
    cout << "Name Method 3:" << (*s2).name << endl;

    //for preventing Memory leak 
    delete s2;
}