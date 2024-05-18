#include <iostream>
using namespace std;

class Student
{
private:
    // State or Properties
    string gfname;
    int height;
    int weight;
    // Behaviour or Function

    void chatting()
    {
        cout << "Chatting with gf" << endl;
    }

public:
    // State or Properties
    string name;
    int age;
    int code;

    // Behaviour or Function
    void eat()
    {
        cout << "Eating" << endl;
    }
    // Accessing Private members By Creating Getter
    // This works on the principle that the Private members of a class are accessible inside class only

    string getGfName()
    {
        return gfname;
    }

    void setGfName(string gf)
    {
        gfname = gf;
    }
};

int main()
{
    // Static Memory Allocation of Class Objects

    Student s1;
    s1.name = "Sushant";
    s1.age = 19;
    s1.code = 2305906;
    // Now Accessing these Values
    cout << "Name is : " << s1.name << endl;
    cout << "Age is : " << s1.age << endl;
    cout << "code is : " << s1.code << endl;

    // Now Accessing Private Member by using Getter and setter
    // *Setter is used to just set the Values to the private members of a class

    cout << "Getter Setter Test\n" << endl;

    // Calling Setter to Set Gfname
    s1.setGfName("Rashmika");
    // Calling Private Member by using Getter Function
    cout << "Gf Name of s1 Student is : " << s1.getGfName();

    return 0;
}