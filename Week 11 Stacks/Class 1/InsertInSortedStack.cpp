#include<iostream>
#include<stack>
using namespace std;

void InsertElement(stack<int> &st, int element)
{
    // Base Case: If the stack is empty or the element is greater than or equal to the top element
    if (st.empty() || element >= st.top())
    {
        st.push(element);
        return;
    }

    // If the top element is greater than the given element, pop it and recursively call InsertElement
    int temp = st.top();
    st.pop();
    InsertElement(st, element);

    // Backtrack: Push the popped element back onto the stack
    st.push(temp);
}



void PrintStack(stack<int>&st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}


int main(){

    //Stack Creation
    stack<int>st;

    //Inserting Elements in Sorted Way
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);


    int element;
    cout << "Enter the Element to Be inserted in Stack :";
    cin >> element;
    cout << endl;

    InsertElement(st,element);
    PrintStack(st);




    return 0;
}