#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    // Connstructor
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        // Sabse pehle check kr lenge ki stack bhar to ni gya hai
        // OVERFLOW CASE CHECK
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            // top ko aage badha denge aur fir insert kr denge
            top1++;
            arr[top1] = data;
        }
    }
    void pop1()
    {
        // pehle check kr lenge ki stack empty to ni ho gya hai
        if (top1 == -1)
        {
            cout << "UNDERFLOW" << endl;
        }
        else
        {
            // top1 ko 0 declare krke top1 ko update kr denge
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data)
    {
        // Sabse pehle check kr lenge ki stack bhar to ni gya hai
        // OVERFLOW CASE CHECK
        if (top2 - top1 == 1)
        {
            cout << "OVERFLOW" << endl;
        }

        else
        {
            // top ko aage badha denge aur fir insert kr denge
            top2--;
            arr[top2] = data;
        }
    }

    void pop2()
    {

        // pehle check kr lenge ki stack empty to ni ho gya hai
        if (top2 == size)
        {
            cout << "UNDERFLOW" << endl;
        }
        else
        {
            // top2 ko 0 declare krke top2 ko update kr denge
            arr[top2] = 0;
            top2++;
        }
    }

    // Declare Print function
    // waise to ye stack ke andar hota nhi hai lekin check krne ke liye
    // function create kr rha hu
    void print()
    {
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // creation of self declare stack
    Stack st(6);

    // inserting elements into the stack
    st.push1(10);
    st.push2(60);
    st.push1(20);
    st.push2(50);
    st.push1(30);
    st.push2(40);

    // // Inserting after the elements are full in stack

    // Printing a stack
    st.print();
}