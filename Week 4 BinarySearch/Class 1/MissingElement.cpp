#include<iostream>
#include<vector>
using namespace std;

int MissingElement(vector<int>&arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans=-101;
    while(start<=end){
        int mid=(start+end)/2;
        int diff=arr[mid]-mid;
        if(diff==1){
            //iss case me aage jaana hai
            start=mid+1;
        }
        else {
            //since difference 2 mill gya hai to isko store kr lenge
                ans=mid+1;  //===>this is Number which is Missing
            
            //Since difference 2 aaya hai lekin ho skta hai piche wala
            //number hi missing ho

            end=mid-1;

        }   
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    int finalans=MissingElement(arr);
    cout << "so the Missing Number is : "<< finalans << endl;
}