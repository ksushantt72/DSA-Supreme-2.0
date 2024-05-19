#include <iostream>
using namespace std;

// Creating Class

class Student
{
private:
    string gfname;
    int height;

public:
    string name;
    int age;
    int weight;
    int code;
    string fname;

    // Behaviours or Function of Students
    void Screaming()
    {
        cout << "Students are screaming in the class " << endl;
    }

    // Setter
    void setgfname(string gfname)
    {
        this->gfname = gfname;
    }
    // Getter
    string getgfname()
    {
        return gfname;
    }

    // Default Constructor

    Student()
    {
        cout << "Default ctor called" << endl;
    }

    // Parameterised constructor 1
    Student(string name, string gfname)
    {
        this->gfname = gfname;
        this->name = name;
        cout << "Parameterised ctor 1 called" << endl;
    }

    // Parameterised constructor 2
    Student(string name, string gfname, int age, int weight)
    {
        this->name = name;
        this->gfname = gfname;
        this->age = age;
        this->weight = weight;
    }

    // COPY CONSTRUCTOR

    Student(Student &obj)
    {
        this->name = obj.name;
        this->gfname = obj.gfname;
        this->fname = obj.fname;
        this->age = obj.age;
        this->weight = obj.weight;
        this->code = obj.code;
        this->height = obj.height;
        cout << "COPY CONSTRUCTOR CALLED" << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Sushant","Anamika");
    cout << "Name of Student s2 is : " << s2.name << endl;
    cout << "GfName of Student s2 is : " << s2.getgfname() << endl;

    Student s3("Nishant", "NoOne", 19, 120);
    Student s4 = s3;
    Student s5(s4);

    // Checking whether the Names of s3 s4 and s5 are same
    cout << "Name of Student s3 is " << s3.name << endl;
    cout << "Name of Student s4 is " << s4.name << endl;
    cout << "Name of Student s5 is " << s5.name << endl;
    //Checking thier gfname
    cout << "GfName of Student s3 is "<< s3.getgfname() << endl;
    cout << "GfName of Student s4 is "<< s4.getgfname() << endl;
    cout << "GfName of Student s5 is "<< s5.getgfname() << endl;

}