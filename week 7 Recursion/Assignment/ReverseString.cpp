#include<iostream>
using namespace std;

void ReverseString(string &str,int start,int end){
    //Base Case
    if(start>=end){
        return;
    }
    

    //Ek case khud solve karo baaki recursion Sambhal lega
    swap(str[start],str[end]);

    //now call recursion 
    ReverseString(str,start+1,end-1);
}


int main(){
    string str;

    cout << "Enter the String you want to Reverse " << endl;
    cin >> str;
    
    int size=str.length();
    int start=0;
    int end=size-1;

    //Printing String Before reversing
    cout << str << endl;

    //Function Call
    ReverseString(str,start,end);

    //Printing String After Reversing
    cout << str << endl;
    
}