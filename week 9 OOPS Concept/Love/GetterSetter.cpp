#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
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

public:
    // Defining Getter
    int getWeight()
    {
        return weight;
    }

    void setWeight(int w)
    {
        weight = w;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int AGE)
    {
        age = AGE;
    }
};

int main()
{
    // Object Creation
    Animal ramesh;
    ramesh.setWeight(101);
    cout << "Weight of Ramesh : " << ramesh.getWeight() << endl;
    ramesh.setAge(1000);
    cout << "Age of Ramesh is : " << ramesh.getAge() << endl;
}