#include<iostream>
#include<string.h>
using namespace std;


int main(){
    //Creation of string
    string name;

    //Taking input in string
    getline(cin,name);

    //Printing String
    cout << "Printing the String "<< endl << name << endl;

    //Printing Index wise
    int index=0;
    while(name[index]!='\0'){
        cout << "Index : " << index << " Character : "<< name[index] << endl;
        index++;
    }
    //Reference when my String input is "Sushant"
    cout << "Printing index 7 value : " << name[7] << endl;
    int Value=(int)name[7];
    cout << Value << endl;



}