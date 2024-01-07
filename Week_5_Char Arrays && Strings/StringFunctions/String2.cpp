#include<iostream>
#include<string.h>
using namespace std;

int main(){


    // //Creating Empty string
    // string temp="";
    
    // //Checking if it is empty or not
    // //True=Empty = output 1
    // //False=Not empty = Output 0
    // cout << "Is Empty or not "<< temp.empty() << endl;

    //Creating a string
    string name;
    getline(cin,name);
    cout << "Length of String Including Spaces : "<< name.length() << endl;


    //Character at Specific Position
    cout << "Character at 0th Position : "<< name.at(0) << endl;


    // Pehla aur aakhiri character konsa hai
    cout << "Front Character is : "<< name.front()<< endl;
    cout << "Last Character is : "<< name.back()<< endl;

    //Add one string to Other
    //Append

    string str1="Sushant";
    string str2=" Kumar";
    
    cout << "Before Appending" << endl;
    cout << "String 1 is--> "<<  str1 << endl;
    cout << "String 2 is--> "<<  str2<< endl;

    str1.append(str2);


    cout << "After appending "<< endl;
    //Now String 1 is string1+string2 but string 2 is as it is string 2
    //Because String 2 has not been Appended

    cout << str1 << endl;
    cout << str2<< endl;

    





    
}