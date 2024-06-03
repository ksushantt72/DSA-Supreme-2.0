#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    // constructor
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    void push(int data)
    {
        // we have to take care of Overflow
        if (top == size-1)
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        // underflow case
        if (top == -1)
        {
            cout << "Stack UnderFLow" << endl;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTop()
    {
        // we wil take care of empty stack
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }
    // Print Functionality is not availble under stack, but to check implementation
    // we are creating print function
    void Print()
    {
        cout << "Top: " << top << endl;
        cout << "Top Element: " << getTop() << endl;
        cout << "Stack : ";
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << endl;
    }
};

int main()
{
    // creation
    Stack st(8);

    // push
    st.push(10);
    st.Print();

    st.push(20);
    st.Print();

    st.push(30);
    st.Print();

    st.push(10);
    st.Print();

    st.push(20);
    st.Print();

    st.push(30);
    st.Print();

    st.push(10);
    st.Print();

    st.push(20);
    st.Print();

    st.push(30);
    st.Print();

    

    return 0;
}