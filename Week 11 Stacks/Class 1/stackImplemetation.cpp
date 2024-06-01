#include <iostream>
#include <stack>
using namespace std;






int main()
{
    // creation
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "size of stack is :" << st.size() << endl;

    st.pop();

    if (st.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // accessing top element
    cout << "Top element is :" << st.top() << endl;

    return 0;
}