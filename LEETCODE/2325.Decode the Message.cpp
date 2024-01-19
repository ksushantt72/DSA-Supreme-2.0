//LEETCODE PROBLEM
//2325. Decode the Message
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        //First we will do mapping
        //Mapping
        char start='a';
        char mapping[300]={0};
        //Saare characters ko 0 se map kiye hain;

        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch]= start;
                start++;
            }
        }
        string ans;
        //Using of Mapping
        for(auto ch: message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char DecodedChar=mapping[ch];
                ans.push_back(DecodedChar);
            }
        }
        return ans;
    }
};