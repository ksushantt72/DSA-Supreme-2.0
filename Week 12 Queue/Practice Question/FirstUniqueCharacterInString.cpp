// 387. First Unique Character in a String
#include <iostream>
using namespace std;

class Solution {
public:
    int findUniqueCharIndex(string& s) {
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            // Now we will update the frquency corresponding to a character
            freq[ch - 'a']++;
        }
        // here our freuqncy table has been updated
        // Now we will check answers in it
        // when we get freq[i] = 1 for the first time we will return that index
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (freq[ch - 'a'] == 1) {
                // since it has value 1 , it is our answer
                // return its index
                return i;
            }
        }
        // if we are here it means nothing has been returned yet
        // we neew to return -1 in this case
        // because there is no unique elements in the string
        return -1;
    }

    int firstUniqChar(string s) { return findUniqueCharIndex(s); }
};