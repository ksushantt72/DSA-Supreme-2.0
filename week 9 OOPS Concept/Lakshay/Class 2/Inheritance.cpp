#include <iostream>
using namespace std;

// First creating Parent Class
class Bird
{
public:
    int age;
    int weight;
    int legs;
    string color;
    void eat()
    {
        cout << "Bird is Eating" << endl;
    }

    void fly()
    {
        cout << "Bird is Flying" << endl;
    }
};

// Child Class-->It will inherit CHaracters and behaviours of Parent class that is Bird Class
class Sparrow : public Bird
{
public:
    // Parameterized Ctor called
    Sparrow(int age, int weight, int legs, string color)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->legs = legs;
        cout << "Parameterized ctor called" << endl;
    }

    void Grassing()
    {
        cout << "Sparrow is Grassing" << endl;
    }
};

// Pigeon Class
class Pigeon : public Bird
{
public:
    void Guttering()
    {
        cout << "Pigeon is Guttering" << endl;
    }
};

// Parrot Class
class Parrot : public Bird
{
public:
    void Speaking()
    {
        cout << "Parrot is Speaking" << endl;
    }
};

int main()
{

    // For Sparrow
    Sparrow s(10, 4, 2, "Brown");
    cout << "Age:" << s.age << endl;
    cout << "Legs:" << s.legs << endl;
    cout << "Col:" << s.color << endl;
    s.eat();
    s.Grassing();

    // For Pigeon
    Pigeon P;
    P.Guttering();

    return 0;
}