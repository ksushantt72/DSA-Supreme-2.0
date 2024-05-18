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

    void sleep()
    {
        cout << "Sleeping " << endl;
    }
    void eat()
    {
        cout << "Eating" << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Sushant Kumar";
    s1.age = 19;
    s1.roll = 2305906;
    s1.weight = 65;

    // Accessing these Values which we have set
    cout << "Name of the Student : " << s1.name << endl;
    cout << "Age of Student s1 : " << s1.age << endl;
    cout << "roll of Student s1 : " << s1.roll << endl;
    cout << "weight of Student s1 : " << s1.weight << endl;

    // Now using Heap Memory Allocation
    cout << "For Student s2" << endl;
    Student *s2 = new Student;

    (*s2).name = "Nishant";
    cout << "Name of Student s2 is : " << (*s2).name << endl;
    (*s2).age = 20;
    cout << "Age of Student s2 is : " << (*s2).age << endl;
    (*s2).roll = 23051843;
    cout << "roll of Student s2 is : " << (*s2).roll << endl;
    (*s2).weight = 150;
    cout << "weight of Student s2 is : " << (*s2).weight << endl;

    // Alternative Way of Writing 48 to 55 rows
    //**Understand Carefully
    cout << "For Student s3" << endl;
    Student *s3 = new Student;
    s3->name = "Nishantt";
    cout << "Name of Student s3 is : " << s3->name << endl;
    s3->age = 30;
    cout << "Age of Student s3 is : " << s3->age << endl;
    s3->roll = 23051943;
    cout << "roll of Student s3 is : " << s3->roll << endl;
    s3->weight = 160;
    cout << "weight of Student s3 is : " << s3->weight << endl;

    // Now accessing Behaviour / function of a class

    // By Static Memory Allcation
    cout << "For Student s1" << endl;
    s1.eat();
    s1.sleep();

    // By dynamic Mmory Allocation
    cout << "For Student s2" << endl;
    (*s2).eat();
    (*s2).sleep();

    // Alternate
    cout << "For Student s3" << endl;
    s3->eat();
    s3->sleep();

    return 0;
}