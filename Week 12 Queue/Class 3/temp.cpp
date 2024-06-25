#include <iostream>
#include<string>
using namespace std;

int main()
{   
    string str;
    str.push_back('S');
    str.push_back('u');
    str.push_back('s');
    str.push_back('h');
    str.push_back('a');
    str.push_back('n');
    str.push_back('t');

    str+'p';




    cout << str << endl;
    cout << str.front();
    cout << str.back();

    return 0;
}