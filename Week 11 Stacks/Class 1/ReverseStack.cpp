#include<iostream>
#include<stack>
using namespace std;
void InsertAtBottom(stack<int>&st,int element){
    if(st.empty()){
        //Agar Empty hai to return kr denge
        st.push(element);
        return;
    }
    //ek case khudse sambhalna hai
    int temp=st.top();
    //uske baad pop kr dena hai
    st.pop();
    //pop krne ke baad recursive call maar dena hai 
    InsertAtBottom(st,element);
    //Aate wakt Backtracking krni hai
    //In Backtracking we have to push the elements which we have stored in temp;
    st.push(temp);

}

void ReverseStack(stack<int>&st){
    //Writing the Base Case
    if(st.empty()){
        return;
    }

    int temp=st.top();
    st.pop();

    //recursive Call
    ReverseStack(st);

    //Backtracking Ke part me ham aate wakt InsertAtBottom krte jaynge saare temp ko 
    InsertAtBottom(st,temp);
}

void PrintStack(stack<int>&st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main(){
    stack<int>st;
    

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // cout << "stack Before Reverse Function is Called" << endl;
    // PrintStack(st);


    ReverseStack(st);
    cout << "Stack After Reverse Function is Called" << endl;
    PrintStack(st);

    
}