//LEETCODE PROBLEM
//852. Peak Index in a Mountain Array

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){
                //Line A pe Hoon aage jaana hai
                start=mid+1;
            }
            else{
                //Line B pe hoon ya khud peak element pe hooon
                //peeche jaana hai
                end=mid;
            }
        }
        return start;
        
    }
};