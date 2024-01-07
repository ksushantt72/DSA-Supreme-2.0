//LEETCODE PROBLEM
//33. Search in Rotated Sorted Array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int PivotIndex(vector<int>& nums){
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(start==end){
                return start;
            }
            else if(mid+1<n && nums[mid] > nums[mid+1]){
                //Yahan pr hmne mid+1<n ka condition daala hai
                //Kyukii mid+1  case me index n ho jayega 
                //jo ki accesible nhi hai 

                return mid;
            }
            else if(mid-1>=0 && nums[mid]<nums[mid-1]){
                //Yahan pr hmne mid-1>=0 ka condition daala hai
                //Kyukii mid-1 2 element ke case me index negative 
                //Ho skta hai 
                return mid-1;
            }
            else if(nums[start]>nums[mid]){
                end=mid-1;
            }
            //Yahan Pr hmne Galtii kii hai 
            //less than ke sath equal to bhu lagana hai
            else if(nums[start]<=nums[mid]){
                start=mid+1;
            }
        }
        return -1;
    }
    int BinarySearch(vector<int>&nums,int start,int end,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
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