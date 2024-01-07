#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int LastOccur(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans=-101;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            ans=mid;
            //Last Occurence chahiye isiliye aage jayenge 
            start=mid+1;
        }
        else if(arr[mid]>target){
            //arr[mid] target value se jaada isiliye piche jayenge kyuki
            //vector ascending order me sorted hai 
            end=mid-1;
        }
        else if(arr[mid]<target){
            //arr[mid] target se chota hai isiiliye aage jayenge
            //kyukii vector ascending order me sorted hai 
            start=mid+1;
        }

    }
    return ans;
}

int main(){
    vector<int>arr{10,20,30,40,50,50,50,50,50,60,70,80,90};
    int target=50;
    int finalans=LastOccur(arr,target);
    cout << "The Last Occurence index of target element was found to be : " << finalans << endl;
}