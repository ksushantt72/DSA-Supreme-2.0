#include<iostream>
#include<string.h>
using namespace std;

//Function Declaration for replacement of Special Character
void Replace(char ch[],int n){
    int index=0;
    while(ch[index] != '\0'){        
        if(ch[index] == '@'){
            ch[index]=' ';
        }
        index++;    
    }
}


int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    cout << "Before Replacing " << endl <<  ch << endl;
    
    //Function Call for Replacement
    Replace(ch,len);
    cout << "After Replacing" << endl<<  ch << endl;


}