#include <iostream>
#include <map>
using namespace std;


int main()
{
    // Creating Map
    map<int, string> array;
    // Storing Values for corresponding Integer
    for (int i = 1; i <= 5; i++)
    {
        cin >> array[i];
    }


    for (int i = 1; i <= 5; i++)
    {
        cout  << array[i] << "  ";
    }
    cout << endl;

    // Printing the Values Corresponding to the Integers given as input
    int j;
    cout << "Enter the Value of the Key for which You want Pair : ";
    cin >> j;
    cout << array[j] << endl;


}
