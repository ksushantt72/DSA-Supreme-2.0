#include<iostream>
using namespace std;

int Solve(string str,int index,int size,int ans,char target){
    //Base Case
    if(index>=size){
        return ans;
    }

    //Solve one Case
    if(str[index]==target){
        ans=index;
    }


    //Call Recursion
    return Solve(str,index+1,size,ans,target);
    //Here we will not use else condition because
    //else will check only if condition is not true
    //but we want to apply recursion even if 
    //"if" condition is true and we want to check further
    
}

int main(){
    string str="abcdddedg";
    int size=str.length();
    int index=0;
    char target;
    cin >> target;
    int ans=-1;
    // int finalans=Solve(str,index,size,ans,target);
    int finalans=Solve(str,index,size,ans,target);
    if(finalans!=-1){
        cout << "The Last Occurence of the Target Character was found at index : " << finalans << endl;
    }
    else{
        cout << "The Target character does not belongs to the string"<< endl;
    }
}