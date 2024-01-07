#include<iostream>
#include<vector>
using namespace std;

int FstOcr(vector<int>& arr,int n,int target){
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<= end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            ans=mid;

            //Jab occurence pata chal gaya ho aur hame first occurenece 
            //chahiye ho to hmesa hmlog mid ko piche le jayenge


            end=mid-1;
            
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr{0,10,20,30,30,30,40,50,60,70};
    int n=arr.size();
    int target=30;

    int finalans=FstOcr(arr,n,target);
    
    cout <<"Target Found at index " << finalans << endl;

}