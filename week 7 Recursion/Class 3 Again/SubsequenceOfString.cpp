#include<iostream>
using namespace std;

void CreateSubsequence(string str,string output,int index){
    //Base case
    if(index >= str.length()){
        //Answer Output String me Build Ho chuka hai 
        //Print
        cout << "--->> " << output << endl;
        return;
    }
    char ch = str[index];
    //Exclude
    CreateSubsequence(str,output,index+1);
    //Include
    //Output string me ch character ko include kr do 
    output.push_back(ch);
    CreateSubsequence(str,output,index+1);
}

int main(){
    string str = "abc";
    string output = "";
    int index=0;
    CreateSubsequence(str,output,index);
}