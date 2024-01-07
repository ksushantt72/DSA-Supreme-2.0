//Question is to find the total occurence of Target in Vector array
#include<iostream>
#include<vector>
using namespace std;

//Function Declaration
int FirstOccur(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans1=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            ans1=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
    }
    return ans1;
}

int LastOccur(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans2=0;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            ans2=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
    }
    return ans2;
}

int main(){
    
    vector<int>arr{10,20,30,30,40,40,50,50,50,50,60,70,80,90,100};
    int n=arr.size();
    int target=30;
    int FirstOccurence=FirstOccur(arr,target);
    int LastOccurence=LastOccur(arr,target);

    int finalans=LastOccurence-FirstOccurence+1;
    cout << "Total Occurence of Target Element was found to be : "<< finalans << endl;

}