#include<iostream>
#include<string.h>
using namespace std;

//Function Declaration for Palindrome check

bool CheckPalindrome(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    //Agar Yaha tak pahoch gaye hai mtlbb 
    //saare characters match ho gye hain
    return true;

    
}


int main(){
    char ch[100];
    cin >> ch ;
    cout <<"Printing Taken Character" << endl <<  ch << endl;

    int len=strlen(ch);

    //Storing Value By Calling Function
    char check=CheckPalindrome(ch,len);

    //Assigning Check statement a/c to true or false

    if(check==true){
        cout << "Valid Palindrome" << endl;
    }
    else {
        cout << "Invalid Palindrome "<< endl;
    }

}