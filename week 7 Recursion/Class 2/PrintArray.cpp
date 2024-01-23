#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[],int n){
    if(n==0){
        return;
    }
    cout << *arr << " ";
    //RecursiveCall
    PrintArray(arr+1,n-1);
}



int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(int);
    //Function Call
    PrintArray(arr,n);
}