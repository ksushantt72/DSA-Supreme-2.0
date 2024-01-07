//LEETCODE PROBLEM
//287. Find the Duplicate Number
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index]<0){
                //In else case we have marked it visited 
                //So as a result of else case if it comes negative 
                //Means it has been passed first by ele condition 
                //So we will return the index in order to
                //get the   value
                ans = index;
                break;
            }
            else{
                //Mark it Visited
                nums[index]*=-1;
            }
        }
        return ans;
        //This return ans will return -1 when there will be no 
        //duplicates
    }
};