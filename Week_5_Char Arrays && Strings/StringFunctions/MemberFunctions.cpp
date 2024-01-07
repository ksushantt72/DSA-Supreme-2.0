#include<iostream>
#include<string.h>
using namespace std;        

int main(){
    string str1="Sushant kumar ";
    string str2="SINGH";


//1.Appending
//Appending Merges string in round bracket    
    str1.append(str2);
    cout <<"Printing string 1 after appending : "<< str1  << endl;

//2.Finding 
//Find Parameter Tells the index where searched string is present in string 1
    cout <<"Index at which String 2 is present in string 1 :" <<  str1.find(str2)  << endl;

//3.Length of the String
//It tells the total length of the string    
    cout << "Length of String : "  <<  str1.length() << endl;

//4.Emptyness
//It tells whether the string is empty or not(0-false/1-true)
    cout << "Is string 1 empty or not : "<<  str1.empty() << endl;

//5.at
//It gives the character at the given index
    cout << "Character at index 4 : "<< str1.at(4) << endl;

//6.Front and Back
//It gives the 1st and last character of the string 
    cout <<"1st characetr of string : "<< str1.front() << endl;
    cout <<"Last characetr of string : "<< str1.back() << endl;

//7.Erase
//It erases the character from 8th index and 5 element from it
    cout << "Erased " <<  str1.erase(8,6) << endl; 

//8.Insert
//It inserts "Kumar" from 8th index
    str1.insert(8,"Kumar");
    cout <<"Printing when inserted :"<<  str1 << endl;

//9.substr
//It creates substring from string at specific part
    string substring=str1.substr(8,5);
    cout << substring << endl;




//10.Stoi
//Converts string to integer
    string str3="1234" ;
//Can only be used when there is integer in strings not alphabets
    int num=stoi(str3);
    cout << num << endl;    

}