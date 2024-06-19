#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    // constructor
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        // we will check if the Queue is full or not--->> OVERFLOW Checking
        if (rear == size - 1)
        {
            cout << "Queue OverFlow" << endl;
            return;
        }
        // Check If the Queue is empty or not
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
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
        // check UnderFlowCase
        if (front == -1 && rear == -1)
        {
            cout << "Queue UnderFLow " << endl;
            return;
        }
        // if there is single element getting popped
        //then we need to maintain initial condition 
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // Normal Case
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getSize()
    {
        //ye bhul jaata hu 
        if (rear == -1 && front == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }
    int getFront()
    {
        // first check if front exists
        if (front == -1)
        {
            cout << "No element in Queue , cannot give front element" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int getRear()
    {
        // first check if the queue is empty or not

        if (rear == -1)
        {
            cout << "Queue Empty " << endl;
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
    void print()
    {
        cout << "Rear : " << rear << endl;
        cout << "Front : " << front << endl;
        cout << "Printing Queue : ";
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
    Queue q(5);
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

    cout << "Size of Queue : " << q.getSize() << endl;

    q.pop();
    q.print();

    cout << "Size of Queue : " << q.getSize() << endl;

    cout << "Queue is Empty or Not : " << q.isEmpty() << endl;

    q.push(100);
    q.print();

    cout << "Front ELement is :" << q.getFront() << endl;
    cout << "Rear Elment is : " << q.getRear() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.print();

    cout << "Front ELement is :" << q.getFront() << endl;
    cout << "Rear Elment is : " << q.getRear() << endl;
    cout << "Size of the Queue is: " << q.getSize() << endl;

    // This is the place where we are doing somthing wrong
    q.pop();
    q.print();
    cout << "Size of the Queue is: " << q.getSize() << endl;

    return 0;
}