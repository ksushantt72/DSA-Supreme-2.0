//LEETCODE PROBLEM
//1910. Remove All Occurrences of a Substring
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            //Jab tk part milta rahega s wale string mein
            //Tabtak humlog usko erase krte rhenge 
            //After every new string is created

            s.erase(s.find(part),part.length());

            //s.find(part) will give the index where it is present as substring
            //and length of part will be no. of characters to be removed
            // from string s starting from index s.find(part)
        }
        return s;
    }
};