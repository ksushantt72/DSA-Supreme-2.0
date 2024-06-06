#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string&str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' ||ch=='+' ||ch=='-' ||ch=='*' ||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            //agar closing bracket mil gya to check krenge ki kitna oprator hai uske beech
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if(temp=='+' ||temp=='-' ||temp=='*' ||temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            //yahan tb pahuchnege jab while loop terminate hogi 
            //while loop tb terminate hogi jab ya to top element ( mill gya ho
            //ya to stack hi empty ho gya ho
            //so agar opening bracket hua to pop kr denge
            st.pop();
            
            
            if(operatorCount==0){
                //agar operator hi nhi hai do brackets ke beech to iska mtlb redundant hai
                return true;

            }
        }
    }
    //agar main yahan tk pahucha hun iska mtlbb 
    //har ek bracket ke pair ke beech
    //ek oprator  jarur mila hogahai 
    return false;
}


int main(){
    string str="((a+(a*b))";
    bool ans=checkRedundant(str);

    if(ans){
        cout << "Redundant Brackets Present" << endl;
    }
    else{
        cout << "Redundant Brackets not Present" << endl;
    }
}