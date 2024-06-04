#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str="Sushant Kumar";

    stack<char>st;
    //storing the string characters inside ch and pushing it into the stack
    //the Character which is inserted first will be accessed in last in stack according to LIFO ordering
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        st.push(ch);
    }
    //jab tk mera stack empty nhi hota --->> meaning of term inside parenthesis
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;




    return 0;
}