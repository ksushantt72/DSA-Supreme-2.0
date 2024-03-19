#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    // Data Members
    string type;
    int age;
    int weight;

    // Member Functions
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Sleeping" << endl;
    }
};

int main()
{
    // Object Creation
    Animal ramesh;
    ramesh.age = 15;
    ramesh.type = "Lion";
    cout << "Age of ramesh is :" << ramesh.age << endl;
    cout << "Type of Ramesh :" << ramesh.type << endl;
    ramesh.eat();
    ramesh.sleep();
}