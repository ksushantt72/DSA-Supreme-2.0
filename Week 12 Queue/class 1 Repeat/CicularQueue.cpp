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
    void push(int val)
    {
        // OVERFLOW
        if (front == 0 && rear == size - 1)
        {
            cout << "OVERFLOW " << endl;
            return;
        }
        // EMPTY CASE
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // CIRCULAR NATURE
        else if (rear == size - 1 && front != 0)
        {

            rear = 0;
            arr[rear] = val;
        }
        // NORMAL FLOW
        else
        {
            
            rear++;
            arr[rear] = val;
        }
    }
    void pop()
    {
        // UNDERFLOW
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
            return;
        }
        // SINGLE ELEMENT
        else if (front == rear)
        {
            arr[front] = -1;
            front++;
        }
        // CIRCULAR NATURE
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
    {   cout << "Front : "<< front << " Rear : "<< rear << endl;
        cout << "printing Queue : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    //creating circular queue of size 5
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


    //After the Queue is Full we are inserting here to see what happens
    
    // q.push(100);
    // q.print();


    //popping elements
    q.pop();
    q.print();
    
    q.pop();
    q.print();    
    
    q.pop();
    q.print();

    //Now pushing in removed ELements position 
    q.push(15);
    q.print();

    q.push(20);
    q.print();

    q.push(25);
    q.print();

    q.push(100);
    q.print();

    




return 0;
}