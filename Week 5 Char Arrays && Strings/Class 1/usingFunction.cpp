#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str1="4";
    string str2="12345";

    string str3= str2.substr(2,1);

    cout << "String 1 : " << str1 << endl; 
    cout << "String 2 : " << str2 << endl; 
    cout << "String 3 : " << str3 << endl; 

    //stoi function using 
    int num1=stoi(str1);
    int num2=stoi(str2);
    int num3=stoi(str3);

    //Printing Num1 num2 and num3
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

}