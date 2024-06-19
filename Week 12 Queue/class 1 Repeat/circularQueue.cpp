#include <iostream>
using namespace std;

class Cqueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // constructor
    Cqueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void push(int value)
    {
        // Overflow Case
        if (front == 0 && rear == size - 1 || rear == front-1)  // --->> yahan pe humne galtti kara tha
        {
            // this means that the array is full in Cqueue
            cout << "OverFLow Case" << endl;
            return;
        }
        // Empty Case
        else if (rear == -1 && front == -1)
        {
            front++;
            rear++;
            arr[rear] = value;
        }
        // Circular Nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        // NormalCase
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    void pop()
    {
        // UNDERFLOW CONDITION
        if (front == -1 && rear == -1)
        {
            cout << "UnderFlowCase" << endl;
            return;
        }
        // SINGLE ELEMENT CASE
        else if (front == rear)
        {
            arr[front] = -1;
            front=-1;
            rear=-1;
        }
        // CIRCULR QUEUE
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        // NORMAL FLOW
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void print()
    {
        cout << "front:" << front << " & rear:" << rear << endl;
        cout << "Printing Queue:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Queue Creation
    Cqueue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(60);
    // q.print();

    q.pop();
    q.pop();
    q.pop();
    q.print();

    q.push(100);
    q.print();

    q.push(110);
    q.print();

    q.push(120);
    q.print();

    q.push(130);
    q.print();

    return 0;
}