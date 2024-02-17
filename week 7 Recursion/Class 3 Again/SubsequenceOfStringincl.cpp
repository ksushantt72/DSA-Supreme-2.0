#include<iostream>
using namespace std;

void PrintSubsequences(string str,string output,int index){
    //Base Case
    if(index >= str.length()){
        //Output string Build ho chuka hai
        //Print Kardo
        cout << "--->> " << output << endl;
        return;
    }
    char currCh=str[index];

    //Include
    output.push_back(currCh);
    PrintSubsequences(str,output,index+1);
    //Exclude
    output.pop_back();
    PrintSubsequences(str,output,index+1);
}

int main(){
    string str="abc";
    string output="";
    int index=0;
    PrintSubsequences(str,output,index);
}