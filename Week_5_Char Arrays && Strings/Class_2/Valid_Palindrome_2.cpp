#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[],int start,int end){
    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

//Function Declaration For VAlid Palindrome 2
bool ValidPalindrome(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else if(ch[start]!=ch[end]){
            //If Starting Character of remaining Palindrome is removed
            bool ans1=checkPalindrome(ch,start+1,end);
            //If Last Character of Remaining palindrome is removed
            bool ans2=checkPalindrome(ch,start,end-1);

            return ans1 || ans2;
        }
    }
    return true;
}


int main(){
    char ch[100];
    cin >> ch;
    int len=strlen(ch);
    int Finalans=ValidPalindrome(ch,len);
    
    if(Finalans==1){
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    

}

