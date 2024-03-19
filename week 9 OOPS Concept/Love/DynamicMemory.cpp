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

}