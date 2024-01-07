#include<iostream>
#include<string.h>
using namespace std;

int StringLength(char ch[]){
    int ans=0;
    for(int i=0;i<100;i++){
        if(ch[i] != '\0'){
            ans++;
        }
        else{
            break;
        }
    }
    return ans;
}


int StringLengthWhile(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}

int main(){
    char ch[100];
    cin.getline(ch,100);

    
    //Using Predefined Function is c++
    //Need to Include string.h in header file
    cout << "Length of String is(Using Predefined Function) : "<< strlen(ch) << endl;

    int lengthFor=StringLength(ch);
    //Printing  string Lenght using For loop
    cout << "Length of String is(Using For LOOP) : "<< lengthFor << endl;

    //Printing  string Lenght using While loop
    int lengthWhile=StringLengthWhile(ch);
    cout << "Length of String is(Using While LOOP) : "<< lengthWhile << endl;



}