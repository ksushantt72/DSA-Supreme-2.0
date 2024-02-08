#include<iostream>
#include<vector>
using namespace std;
//Function Declaration 
int firstOcc(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans=-1;

    while(start <= end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            //first store ans and then search for another nearest answer
            ans=mid;
            //we need to find first occ and for this we need to move left

            end=mid-1;
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
    vector<int>arr{10,20,30,30,30,30,40,50,60,70,80,90,100};
    int target;
    cout << "Enter the Target you want to find : ";
    cin >> target;
    int Finalans=firstOcc(arr,target);

    if(Finalans==-1){
        cout << "Target was not Found" << endl;
    }
    else{
        cout << "Target was found at index : "<< Finalans;
    }

}
