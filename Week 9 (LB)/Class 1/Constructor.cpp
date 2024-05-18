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


    return 0;
}