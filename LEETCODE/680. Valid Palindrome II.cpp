//LEETCODE PROBLEM
//680. Valid Palindrome II
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


class Solution {
public:
    bool checkPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        //We are outside the while loop
        //This means the false has not been returned 
        //This also means that we need to return true
        return true;
    }
    bool validPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            if(s[start]==s[end]){
                //this is the case where first and last element
                //Matches so we need to move pointer ahead
                start++;
                end--;
            }
            else if(s[start]!=s[end]){
                //This is the case where we are allowed only one removal
                //Removing The 1st that is starting element
                bool ans1=checkPalindrome(s,start+1,end);
                //This is the case where we are removing the last element
                bool ans2=checkPalindrome(s,start,end-1);


                //Agar dono me se koi condion me valid palindrome aa gaya to 
                //true return kr denge isiliye or ka use kiye hain       
                return ans1 || ans2 ;
            }
        }
        return true;
        
    }
};