#include<iostream>
using namespace std;

int main(){
    char ch[100];
    // This below code will take input even on pressing new line characeter
    //Or space 
    //But will terminate cin command on pressing enter key
    //so only delimeters of cin.getline() command is enter press
    cin.getline(ch,100);
    cout << ch;
}