#include <iostream>
using namespace std;

class Student
{

    string gfname;
    void Chatting()
    {
        cout << "Chatting" << endl;
    }

public:
    string name;
    int weight;
    int height;
    int roll;
    int *code;

    // Parametrized Constructor Calling
    Student(string name, int weight, int height, int roll)
    {
        this->name = name,
        this->weight = weight;
        this->height = height;
        this->roll = roll;
        // this->(*code)=code;
        // doubt here
        cout << "Parametrised constructor called" << endl;
    }
    // Getter
    string getgfname()
    {
        return gfname;
    }
    // Setter
    void setgfname(string gfname)
    {
        this->gfname = gfname;
    }

    // COPY CONSTRUCTOR
    Student(const Student &obj)
    {
        this->name = obj.name;
        this->weight = obj.weight;
        this->height = obj.height;
        this->roll = obj.roll;
        this->gfname = obj.gfname;
        cout << "Copy Constructor Called for Student" << endl;
    }
    // Destructor
    // Destructor are called when a class ends
    // By default it is made by the compiler

    // But when we are  allocating memory on heap we need to deallocate momory to prevent memory leak
    // at that time0 destructor is needed

    ~Student()
    {
        // Destructor is used to destroy the dynamic memory allocated
        delete code;
        cout << "Defaul Destructor called" << endl;
    }
};

int main()
{
    Student s1("Sushant", 65, 170, 2305906);
    s1.setgfname("Anamika");
    cout << s1.getgfname() << endl;
    // CopyCOnstructor
    Student s2(s1);
    // Student s2=s1;   Both line no. 58 and 59 are same
    cout << s2.getgfname() << endl;

    // Student s3;
    // s3=s1;
    // Avoid writing these type of code coz these are considere bad practices

    // Using dynamic Memory Allocation
    Student *s3 = new Student("Nishant", 120, 168, 23051843);
    cout << "Name of S3 is : " << (*s3).name << endl;
    cout << "Weight of S3 is : " << (*s3).weight << endl;
    cout << "Height of S3 is : " << (*s3).height << endl;
    cout << "ROLL of S3 is : " << (*s3).roll << endl;

    // Another way of writing the avove(ln66) same codes are
    Student *s4 = new Student((*s3));
    cout << "Name of S4 is : " << s4->name << endl;
    cout << "Weight of S4 is : " << s4->weight << endl;
    cout << "Height of S4 is : " << s4->height << endl;
    cout << "ROLL of S4 is : " << s4->roll << endl;
    delete s3;
    delete s4;
}