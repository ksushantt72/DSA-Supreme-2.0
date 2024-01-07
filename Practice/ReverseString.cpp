#include<iostream>
#include<string.h>
using namespace std;

void ReverseString(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,14);
    cout << "Before Reverting :" << endl;
    cout << ch << endl;
    int len=strlen(ch);

    ReverseString(ch,13);
    cout << "After Reverting :" << endl;
    cout << ch;

}