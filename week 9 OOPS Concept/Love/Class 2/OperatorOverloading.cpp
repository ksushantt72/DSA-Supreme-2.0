#include <iostream>
using namespace std;

class Param
{
public:
    int value;

    void operator+(Param &obj2)
    {
        int value1 = this->value;
        int value2 = obj2.value;
        cout << "The value cooresponding to overloaded Opearator is : " << (value1 - value2) << endl;
    }
};

int main()
{
    Param object1, object2;
    object1.value = 6;
    object2.value = 8;
    // Object 1 -> Treated as Current Object, object2-> Treated as input parameter
    object1 + object2;
    // this whole thing contains the same meaning as object1.add(object2); where add is member function
    object2 + object1;
}