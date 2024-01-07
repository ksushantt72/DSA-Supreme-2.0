#include<iostream>
#include<string.h>
using namespace std;

void UCtoLC(char ch[],int n){
    int index=0;
    while(ch[index] !='\0'){
        char currCharacter=ch[index];
        //Checking whether the Character is LC or in UC
        //if it is in LC then converting it to UC
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index]=currCharacter-'a'+'A';
        }
        index++;
    }
}


int main(){
    char ch[100];
    cin.getline(ch,100);

    cout << "Before Conversion " << endl;
    cout << ch << endl;

    cout << "After Conversion " << endl;
    //Function call to Change Case
    UCtoLC(ch,100);
    //Printing Characters
    cout << ch << endl;

    //Function call
}