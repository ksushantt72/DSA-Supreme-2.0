#include<iostream>
#include<stack>
using namespace std;



class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        //for loop for the traversal in the sring
        for(int i=0;i<s.length();i++){
            //we will store current char in curr
            char curr=s[i];
            //checking which type of bracket is it
            //if it is closing bracket then we wil include it in the stack
            if(curr=='(' ||curr=='{' ||curr=='['){
                //we will push it in the stack
                st.push(curr);
            }
            else{
                //this is the case where the curr is having closing bracket
                //so first of all we will check if the curr bracket and the stack's
                //top bracket are same or not
                //we wil check only if the stack is not empty
                if(!st.empty()){
                    if(curr==')' && st.top()=='('){
                        //matches
                        st.pop();
                    }
                    else if(curr=='}' && st.top()=='{'){
                        st.pop();
                        
                    }
                    else if(curr==']' && st.top()=='['){
                        st.pop();
                        
                    }
                    else{
                        //this is the case when id doesnot matches with the stack's
                        //top element
                        return false;
                    }
                }

                else{
                    //if we are here it measn we still have closing bracket but the
                    //the stack doesnot have any element left
                    //so in that case we will return false
                    return false;
                }

            }


        }
        //when we are out of for loop , we wil check if the stack is empty 
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
