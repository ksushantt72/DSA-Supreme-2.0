//LEETCODE PROBLEM
//1047. Remove All Adjacent Duplicates In String
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int index=0;

        while(index < s.length()){
            //ans array ke righmost character se check krenge
            //agar match hua to pop back kr denge
            //nahi to push back kr denge wo character

            if(ans.length() > 0 && ans[ans.length()-1]==s[index]){
                //Pop Back from string
                ans.pop_back();

            }
            else {
                //Push back to string
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};