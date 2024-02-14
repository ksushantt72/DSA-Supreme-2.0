#include<iostream>
using namespace std;
//Function Declaration 

void Merge(int arr[],int start,int end){
    int mid=(start+end)/2;
    int n1=5;
    int n2=mid-1;
}


void MergeSort(int arr[],int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        //Breaking
        //Recursive Call for Half Part
        MergeSort(arr,start,mid);
        
        //Recursive Call 2nd for Half Part
        MergeSort(arr,mid+1,end);

        //Finally Merge Function Which will Sort and merge in original Array 
        Merge(arr,start,end);
    }
}


int main(){
    int arr[]={5,4,6,8,9,7};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;

    //Function Call
    MergeSort(arr,start,end);
}