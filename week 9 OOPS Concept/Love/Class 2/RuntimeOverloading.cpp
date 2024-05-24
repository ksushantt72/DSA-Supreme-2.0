#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Speaking..." << endl;
    }
};
class Dog : public Animal
{
public:
    // Overides the Inherited function speak
    void speak()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    // Animal*a=new Animal();
    // a->speak();

    // Dog*d=new Dog();
    // d->speak();

    // UPCASTING
    // Animal *a = new Dog();
    // a->speak();

    // // DownCASTING
    // Dog *d = (Dog*)new Animal();
    // d->speak();

    // Animal*a1=new Animal();
    // a->speak();

    // Dog*d1=new Dog();
    // d1->speak();

    //Agar hum chahte hain ki jis type ka pointer hai usi type ka function call ho to         ----->> without Virtual
    //Agar hum chahte hain ki jis type ka hmara object hai usi type ka function call ho to    ----->> with vitual

    //Left Side wins if  ----->> Without Virtual Applied
    //Right Side wins if ----->> With Virtual Applied 



}