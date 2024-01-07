//LEETCODE PROBLEM
//647. Palindromic Substrings
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int expand(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j] ){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        //This totalCount will include Oddka Count aur Even ka count
        int totalCount=0;
        for(int center=0;center<s.length();center++){
            //ODD
            //In this case both the  pointers are at the same index
            int oddKaAns=expand(s,center,center);

            //EVEN
            //In this case the pointers are at the adjacent index
            int evenKaAns=expand(s,center,center+1);
            totalCount=totalCount+oddKaAns+evenKaAns;
        }
        return totalCount;
    }
};