#include<iostream>
#include<string.h>
using namespace std;

//Function Declaration
void UCtoLC(char ch[]){
    int index=0;
    while(ch[index] != '\0'){
        //Changing Whether it is in UC or not
        char currCharacter=ch[index];
        if(currCharacter>='A' && currCharacter<='Z'){
            ch[index]=currCharacter-'A'+'a';
        }
        index++;
    }
}


int main(){
    char ch[100];
    cin.getline(ch,100);

    //Printing before Changing case
    cout << "before Conversion " <<  endl;
    cout << ch << endl;


    //Function Call to change case from UC to LC
    UCtoLC(ch);
    //Printing After Changing case
    cout << "After Conversion " << endl;
    cout << ch << endl;

}