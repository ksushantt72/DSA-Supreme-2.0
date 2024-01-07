#include<iostream>
using namespace std;

int FindPivotElement(int arr[],int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[start]>arr[mid]){
            //In this case
            //We can say that mid lies on Line B
            end=mid-1;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            return mid+1;
        }
        else{
            start=mid+1;
        }
    }
}

int main(){
    int arr[]={12,14,16,2,4,6,8,10};
    int n=8;
 int ans=FindPivotElement(arr,n);
 cout << arr[ans];    
}