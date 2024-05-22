#include <iostream>
using namespace std;

class Person
{
    void walk()
    {
        cout << "Walking" << endl;
    }
};

class Teacher : public Person
{
    void teach()
    {
        cout << "Teaching" << endl;
    }
};

class Researcher : public Person
{
    void research()
    {
        cout << "Researching" << endl;
    }
};

class Proffesor : public Teacher, public Researcher
{
    void bore()
    {
        cout << "Boring" << endl;
    }
};

int main()
{
    Proffesor p;
    // p.walk();        Cant be accessed here because of ambiguity , proffesor cant decide whose walk to use so confusion


    //This type of Problem is called diamond problem 
    //The two solution for these type of Problem are solved in seperate files in this folder
    //Thats it for now       
}