//LEETCODE PROBLEM
//268. Missing Number

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
        //Function Declaration
    int Missing(vector<int>& nums){
        int n=nums.size();
        int actualsum=0;

        for(int i =0;i<n;i++){
            actualsum+=nums[i];
        }
        int expectedsum=n*(n+1)/2;

        //So missing Number will be the 
        //difference of the  Actual and expected sum
        int ans=expectedsum-actualsum;
        return ans; 
    }
    int missingNumber(vector<int>& nums) {
        return Missing(nums);   
    }
};