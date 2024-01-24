#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int start,int end,int target){
    //Base Condition for Binary Search will be
    if(start>end){
        //Maine poora array traverese kr liya hai aur target mila hi nhi 
        // so we will return -1;
        return -1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        //Right jaao
        //Recursive call
        return BinarySearch(arr,n,mid+1,end,target);
    }
    else{
        //Left me jaana hai 
        return BinarySearch(arr,n,start,mid-1,target);

    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int target;
    cout << "Enter the Value of teh Target : ";
    cin >> target;

    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;
    //Binary Search Function Call
    int finalans=BinarySearch(arr,n,start,end,target);
    cout << "The Value of Index at which taregt is present is : " << finalans;
}