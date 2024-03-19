#include <iostream>
using namespace std;

// by default every object inside a class is private
// but you can make it public

class Student
{
public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    };

int main()
{
    cout << "Size of Student Class :" << sizeof(Student) << endl;
    cout << sizeof(string);
    return 0;
}