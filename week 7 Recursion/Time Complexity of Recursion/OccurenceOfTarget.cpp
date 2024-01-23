#include<iostream>
#include<vector>
using namespace std;

void Search(int arr[],int size,int index,int target,vector<int>&ans){
    if(index >= size){
        return;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    //Recursive call
    Search(arr,size,index+1,target,ans);
}

int main(){
    int arr[]={10,20,10,40,10,60,10,80,10,100};
    int size = sizeof(arr)/sizeof(int);
    int index=0;
    int target=10;
    vector<int>ans;

    //Now Calling Function
    Search(arr,size,index,target,ans);
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
   
}