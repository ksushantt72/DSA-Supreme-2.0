#include<iostream>
#include<vector>
using namespace std;

//Function Declaration 
void FindSubsequences(string str,string output,int index,int size){
    //Base Conditon 
    if(index >= size){
        //In this case we will print the Output strings
        cout << "--->> " << output << endl;
        return; 
    }
    char ch = str[index];
    //ek case khud solve krdo
    //Exclude(just call the recursion without doing anything)
    FindSubsequences(str,output,index+1,size);
    //Include
    output.push_back(ch);
    FindSubsequences(str,output,index+1,size);


}

int main(){
    // string str="abcde";
    string str;
    getline(cin,str);
    int size=str.length();
    string output="";
    
    int index=0;

    //Calling Function 
    FindSubsequences(str,output,index,size);

}