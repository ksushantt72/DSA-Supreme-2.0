#include <iostream>
using namespace std;

class Bird
{
private:
    int age;

protected:
    int nol;

public:
    int weight;
    void eat()
    {
        cout << "eating " << endl;
    }

    void fly()
    {
        cout << "flying " << endl;
    }
};

class Parrot : public Bird
{
    void parrot()
    {
        cout << weight << endl;
    }

public:
    // getter setter
    // getter
    int getProDataofBird()
    {
        return nol;
    }
    // setter
    void SetProDataOfBird(int number)
    {
        nol = number;
    }
};

class Sparrow : protected Bird
{
public:
    void grassing()
    {
        cout << "Grassing" << endl;
    }
    void Print()
    {
        cout << weight << endl;
    }

    void check()
    {
        // cout << age << endl;
    }
};

class Piegon : public Bird
{
public:
    void Guttering()
    {
        cout << "Guttering" << endl;
    }
};

int main()
{
    Bird b;
    Sparrow s;
    Piegon p;

    // // Accessing Sparrow
    // s.age;
    // s.nol;
    // s.weight;
    // s.eat();
    // s.fly();
    // s.grassing();

    // // Accessing Piegon
    // p.age;  //This is Private content and cant be accessed anywhere except in its own class
    // p.nol; // This cant be accessed here because the Mode of inheritence is protected and can be accessed only inside the derived class
    // p.weight;
    // p.eat();
    // p.fly();
    // p.Guttering();

    Parrot P;
    P.SetProDataOfBird(10);
    cout << P.getProDataofBird() << endl;
}