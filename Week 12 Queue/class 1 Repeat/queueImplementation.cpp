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
    

    void push(int value){
        //we will check if the Queue is full or not--->> OVERFLOW
        if(rear=size-1){
            cout << " Queue is Full , Can't Push" << endl;
            return;
        }
        //Check If the Queue is empty or not
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=value;
        }
        //NormalCase
        else{
            rear++;
            arr[rear]=value;
        }
    }
};

int main()
{

    return 0;
}