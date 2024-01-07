//LEETCODE PROBLEM
//2149. Rearrange Array Elements by Sign
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int>finalans;
        for(int i=0;i<arr1.size();i++){
            finalans.push_back(arr1[i]);
            finalans.push_back(arr2[i]);
        }
        finalans=nums;
    }
};