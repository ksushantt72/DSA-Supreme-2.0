#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    
    while(start <= end){   
        //Here writing mid condition is catch
        //very Important to write

        int mid=(start + end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return -1;
}

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int n=arr.size();
    int target=90;

    int TargetElement=BinarySearch(arr,target);
    if(TargetElement==-1){
        cout << "Element Not Found"<< endl;
    }
    else{
        cout << "ELement Found at index "<< TargetElement << endl;
        cout << "Target Element is " << arr[TargetElement] << endl; 
    }
}