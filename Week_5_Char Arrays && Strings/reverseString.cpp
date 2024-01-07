#include<iostream>
#include<string.h>
using namespace std;

//FunctionDeclaration for Reversing an array of character
void ReverseArray(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}


int main(){
    char ch[10];
    cin.getline(ch,100);
    cout << "Before Reversing: " <<  ch << endl;
    int len=strlen(ch);
    //FunctionCallFor Reverse Array
    ReverseArray(ch,len);
    cout << "After  Reversing: "<<  ch << endl;;
}