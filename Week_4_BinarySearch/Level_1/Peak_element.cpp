//Reference---> leetcode 852- Peak INdex in a mountain array
#include<iostream>
#include<vector>
using namespace std;

int PeakElement(vector<int>&arr){
    int n=arr.size();
    int start=0;
    int end=n-1;

    while(start<end){
        int mid=start+(end-start)/2;

        if(arr[mid]<arr[mid+1]){
            //Agar Line__A pr hua to aage badhana hai
            start=mid+1;
        }
        else{
            //agar Line B pr mid aaya hai to use piche le jaana hai 
            //till the condition meets
            end=mid;
        }
    }
    return start;
}

int main(){
    vector<int>arr{10,20,30,40,50,40,30,20,10};
    int finalans=PeakElement(arr);
    cout << finalans << endl;
}