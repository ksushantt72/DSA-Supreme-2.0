#include <iostream>
using namespace std;

class Maths
{
public:
    // void Print(){
    //     cout << "Priting Word"<< endl;
    // }

    // void Print (){
    //     cout << "Printing Statement" << endl;
    // }
    // Since both the codes are same in terms of function name and parameters passed, so it will generate errors

    // To overcome this problem with same function name, we will have to differentiate parameters so that the
    // compiler know about which function to call based on the parameters passed inside them or change in datatype
    int Sum(int x, int y)
    {
        cout << "First Signature" << endl;
        return x + y;
    }

    int Sum(int x, int y, int z)
    {
        cout << "Second Signature " << endl;
        return x + y + z;
    }

    int Sum(double x, double y, double z)
    {
        cout << "Third Signature " << endl;
        return x + y + z;
    }
};

int main()
{
    Maths obj;
    cout << obj.Sum(5, 6, 7) << endl;
    cout << obj.Sum(5, 6) << endl;
    cout << obj.Sum(5.1, 6.2, 7.2) << endl;
}