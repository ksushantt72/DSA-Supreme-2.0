#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int PivotIndex(vector<int>& arr){
        int n=arr.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(start==end){
                return start;
            }
            else if(mid+1<n && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(mid-1>=0 && arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else if(arr[start]>arr[mid]){
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return -1;
    }
    int BinarySearch(vector<int>&arr,int start,int end,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else {
               end=mid-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotindex=PivotIndex(nums);
        int n=nums.size();
        int ans=-1;


        if(target>=nums[0] && target<=nums[pivotindex]){
            ans=BinarySearch(nums,0,pivotindex,target);
        }
        else{
            ans=BinarySearch(nums,pivotindex+1,n-1,target);
        }
        return ans;
    }
    
};