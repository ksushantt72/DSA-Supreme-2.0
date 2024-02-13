#include<iostream>
using namespace std;
//Function declaration
void PrintPermutation(string str,int index){
    if(index>=str.length()){
        //Print String 
        cout << str << " ";
        return;
    }

    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        //Recursion 
        PrintPermutation(str,index+1);
    }

}


int main(){
    string str="abc";
    int index=0;
    //Function Call
    PrintPermutation(str,index);
}