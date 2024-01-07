#include<iostream>
using namespace std;

    int FirstOccurence(int arr[],int n,int target){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
        int mid=start+ (end-start)/2;
            if(arr[mid]==target){
                ans=mid;
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


    int LastOccurence(int arr[],int n,int target){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
        int mid=start+ (end-start)/2;
            if(arr[mid]==target){
                ans=mid;
                start=mid+1;
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


    int TotalOccurence(int arr[],int n,int target){
        int firstocc = FirstOccurence( arr, n, target);
        int Lastocc  = LastOccurence( arr, n, target);
        int finalans = Lastocc - firstocc + 1;
        return finalans;
    }



int main(){
    int arr[]={10,20,30,40,40,40,40,40,40,50,60,70};
    int n=12;
    int target=40;
    int ans = TotalOccurence(arr,n,target);
    cout << "Total Occurence of Target is" << ans << endl;
}