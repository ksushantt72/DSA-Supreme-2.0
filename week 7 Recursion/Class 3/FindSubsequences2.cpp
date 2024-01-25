#include<iostream>
#include<vector>
using namespace std;

void FindSubsequences(string str,string output,int index,int size,vector<string>&ans){
    //Base Condition 
    if(index >= size){
        ans.push_back(output);
        return;
    }
    //Include
    char ch=str[index];
    output.push_back(ch);
    //Baake recursion sambhal lega
    FindSubsequences(str,output,index+1,size,ans);

    //Exclude
    //iss case me Exclude krna tha but pehle se push back ho chuka hai due to  Include
    //so we will first pop back
    output.pop_back();
    //Recursive Call
    FindSubsequences(str,output,index+1,size,ans);
}


int main(){
    string str="abc";
    string output="";
    //Now we will be printing the subsequences of string using Function Call
    int index=0;
    int size=str.length();
    vector<string>ans;

    //Function call
    FindSubsequences(str,output,index,size,ans);
    //From this Function ans Vector is updated
    //now print
    for(auto i:ans){
        cout << " --->> " << i << endl;
    }

}