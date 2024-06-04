#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int element)
{
    // Agar Stack Empty to hi insert krenge
    //this is our base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    //Now solving one case myself
    //Top element ko store krke rkh lenge
    int temp=st.top();
    //uske baad top element ko pop kr denge
    st.pop();
    //uske baad recursion call krenge jisse last element tk jaa ske
    InsertAtBottom(st,element);
    //Backtracking-->> Recursion se laut te wakt jo pop kiye the usko push kr denge
    st.push(temp);
}

void printStack(stack<int> &st)
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

    // creation of stack
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

    // printStack(st);

    // Inserting at Bottom of the Stack
    //Now at starting out top is at the last element
    //so finding the position of top
    InsertAtBottom(st,400);

    //ab Print function call krenge ye dekhne ke liye ki last me kon sa element hai 
    printStack(st);
    return 0;
}