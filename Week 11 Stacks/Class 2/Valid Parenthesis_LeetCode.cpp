#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        //ek stack create krenge jisme hm comparison ke liye open brackets
        //push krenge
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            //agar open brackets hue to PUSH kr denge Stack ke andar
            if(ch=='(' || ch=='{' || ch=='[' ){
                //push it
                st.push(ch);
            }
            else{
                //Closing Bracket
                //we will check for closing Bracket iff stack isnot empty
                if(!st.empty()){
                    if(ch==')' && st.top()=='('){
                        //Agar Match ho rha hai to top elements ko pop krenge
                        st.pop();
                    }
                    else if(ch=='}' && st.top()=='{'){
                        st.pop();
                    }
                    else if(ch==']' && st.top()=='['){
                        st.pop();
                    }
                    else{
                        //No Match then return false
                        return false;
                    }
                }
                //leking Agar stack hi empty hai aur hme closing bracket mill rha
                //to fir hm false return kr denge
                else{
                    return false;
                }
            }
        }
        //Jab for loop se baahar aa gye hain to check kr lenge
        //ki kahin stack empty to nhi hai

        //if empty-->> then valid
        if(st.empty()){
            return true;
        }
        //ef not empty-->> then invalid
        else{
            return false;
        }
    }
};

//this question was solved be me after understanding concepts