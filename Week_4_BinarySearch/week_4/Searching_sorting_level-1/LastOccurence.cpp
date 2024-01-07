#include<iostream>
using namespace std;

int LastOccurence(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1; // initialising ans=-1 is considered good Practice

    while(start<=end){
        int mid= start+ (end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
    }
    return ans;

}


int main(){
    int arr[]={10,20,30,40,40,40,40,40,40,50};
    int n=10;
    int target=40;

    int ansIndex=LastOccurence(arr,n,target);
    if(ansIndex==-1){
        cout << "Target is not Found" << endl;
    }
    else{
        cout << "Last Occurence of Target is at Index " << ansIndex << endl;
    }

}