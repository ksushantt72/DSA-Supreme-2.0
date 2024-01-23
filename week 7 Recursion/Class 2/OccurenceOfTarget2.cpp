#include<iostream>
#include<vector>
using namespace std;

vector<int> Search(int arr[],int size,int index,int target){
    vector<int>ans;
    if(index >= size){
        return ans;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    //Recursive call
    Search(arr,size,index+1,target);
}

int main(){
    int arr[]={10,20,10,40,10,60,10,80,10,100};
    int size = sizeof(arr)/sizeof(int);
    int index=0;
    int target=10;
    vector<int>ans;

    //Now Calling Function
    Search(arr,size,index,target);

   
}