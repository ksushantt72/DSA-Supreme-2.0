#include<iostream>
using namespace std;

int MissingElement(int arr[],int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]-mid==1){
            start=mid+1;
        }
        else if(arr[mid]-mid!=1){
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}


int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;

    int finalans=MissingElement(arr,n);
    if(finalans==-1){
        cout << "There are No Missing element";
    }
    else{
        cout << "Missing Element was "<< finalans+1 << endl;
    
    }
}