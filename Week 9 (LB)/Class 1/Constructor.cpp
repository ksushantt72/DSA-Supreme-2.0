#include <iostream>
using namespace std;

class Student
{
private:
    string gfname;

    void chat()
    {
        cout << "Chatting with gf" << endl;
    }

public:
    string name;
    int age;
    int roll;
    int weight;

    // CONSTRUCTOR
    Student()
    {
        cout << " Default ctor called ( Where no Parametrs are present ) " << endl;
    }

    // PARAMETRISED CONSTRUCTOR 1
    Student(int age, int roll)
    {
        this->age = age;
        this->roll = roll;
        cout << " Parametrised Ctor having 2 parameters called " << endl;
    }

    // PARAMETRISED CONSTRUCTOR 1
    Student(string name, string gfname, int age, int weight)
    {
        this->name = name;
        this->gfname = gfname;
        this->age = age;
        this->weight = weight;
        cout << " Parametrised ctor having 4 parameters called " << endl;
    }

    // COPY CONSTRUCTOR
    Student(Student &obj)
    {
        this->age = obj.age;
        this->name = obj.name;
        this->roll = obj.roll;
        cout << "I am inside copy Constructor " << endl;
    }

    // Behaviour
    void sleep()
    {
        cout << "Sleeping " << endl;
    }
    void eat()
    {
        cout << "Eating" << endl;
    }

    string getgfname()
    {
        return gfname;
    }
};

int main()
{
    Student s1;
    Student *s2 = new Student;

    // According to the parameter which we are passing, the parametrized ctor will be called

    // for example if we are passing 2 parametrs then the parametrised ctor having 2 parametrs will be called
    Student s3(18, 2305906);

    // for example if we are passing 4 parametrs then the parametrised ctor having 4 parametrs will be called
    Student s4("Sushant", "Anamika", 18, 65);
    cout << "Name of s4 is :" << s4.name << endl;

    Student *s5 = new Student("Nishant", "No_One", 19, 120);
    cout << "Name of Student s5 is : " << s5->name << endl;

    // COPY CONSTRUCTOR CALLING
    Student s7(s4);
}