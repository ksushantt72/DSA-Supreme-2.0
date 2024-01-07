//LEETCODE PROBLEM
//2643. Row With Maximum Ones

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int OneCount=INT_MIN;
        int RowNumber=-1;
        int n=mat.size();
        for(int i=0;i<n;i++){
            //Har Row ke Liye count ko zero le lenge
            //Jis row me maximum hoga usme onecount=count kr denge
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>OneCount){
                OneCount=count;
                RowNumber=i;
            }
        }
        ans.push_back(RowNumber);
        ans.push_back(OneCount);
        return ans;
    }
};