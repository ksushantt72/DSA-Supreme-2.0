#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // Constructor
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void push(int val)
    {
        // checkOverflow
        if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        // check it the queue is empty or not
        else if (front == -1 && rear == -1)
        {
            // then the queue is empty
            // and in this case we need to increment front and rear both
            rear++;
            front++;
            arr[rear] = val;
        }
        // normal case
        else
        {
            // Not Full niether empty
            rear++;
            arr[rear] = val;
        }
    }
    void pop()
    {
        // checkUnderflow
        if (rear == -1 && front == -1)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        // check if the element is single in queue or not
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // Normal case
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
        return rear - front + 1;
    }
    int getFront()
    {
        // check if it is not empty
        if (front == -1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    void Print()
    {
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
    // queue Creation of size=5
    Queue q(5);

    // Inserting Elements to the Queue
    q.push(10);
    q.Print();

    q.push(20);
    q.Print();

    q.push(30);
    q.Print();

    q.push(40);
    q.Print();

    q.push(50);
    q.Print();
    cout << "size of Queue : " << q.getSize() << endl;

    q.pop();
    q.Print();

    cout << "size of Queue : " << q.getSize() << endl;
    cout << "Queue is Empty Or not(0:No 1:Yes) :" << q.isEmpty() << endl;

    // Instead i have 1 space available after popping but we cant push because
    // Push command takes place only on rear not front

    q.push(100);
    q.Print();
}