#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int target,int start,int end){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]>target){
        //in this case we will go to left
        end=mid-1;
        return BinarySearch(arr,size,target,start,mid-1);
    }
    else{
        //Move toward right
        return BinarySearch(arr,size,target,mid+1,end);
    }



}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int target=70;
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;

    int finalans=BinarySearch(arr,size,target,start,end);
    if(finalans==-1){
        cout << "Target Element Was Not Found"<< endl;
    }
    else{
        cout << "Target Element was found at index : " << finalans << endl;
    }



}