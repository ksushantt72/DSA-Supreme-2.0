#include <iostream>
using namespace std;
#include <stack>

void InsertSorted(stack<int> &st, int element){
    //if case me pehle check krna hoga ki kahin empty to nhi hai 
    //uske baad hi st.top check kr skte hain 
    //qki agar empty ho gya to top execute hi nhi ho payega
    //this condition inside if is very important to understand
    if(st.empty() || element>st.top()){
        st.push(element);
        return;
    }
    //1 case khud solve krna hai 
    int temp=st.top();
    st.pop();

    //Recursive Call
    InsertSorted(st,element);

    //Backtracking
    st.push(temp);
}

void SortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    //1 case solve krna hai 
    int temp=st.top();
    st.pop();

    //Recursive Call
    SortStack(st);

    //Backtracking
    //Insert in Sorted way
    InsertSorted(st,temp);
}

void PrintStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    // Stack Creation
    stack<int> st;

    // pushing Elements
    st.push(40);
    st.push(52);
    st.push(33);
    st.push(88);
    st.push(96);
    st.push(44);
    st.push(13);


    SortStack(st);
    PrintStack(st);


}