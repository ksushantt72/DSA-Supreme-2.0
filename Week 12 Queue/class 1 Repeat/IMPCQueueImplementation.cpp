#include <iostream>
using namespace std;

class CQueue{
    public:
    int*arr;
    int size;
    int front;
    int rear;

    //Default Constructor
    CQueue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val){
        //Case-1 (Queue is Full)
        if(front==0 && rear==size-1 || rear==front-1){
            cout << "Overflow"<< endl;
        }
        //Case-2 (Queue is Empty)
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        //Case-3 (Maintain Circularity of Queue)
        else if(rear == size-1 && front != 0){
            rear=0;
            arr[rear]=val;
        }
        //Case-4 (Normal Push)
        else{
            rear++;
            arr[rear]=val;
        }
    }


    void pop(){
        //case-1 (When Queue is Empty)
        if(front==-1 && rear==-1){
            cout << "UNDERFLOW" << endl;
        }
        //case-2 (When there is Single element in Queue)
        else if(front==rear){
            arr[front]=-1;
            rear=-1;
            front=-1;
        }

        //Case-3 (Normal POP)
        else{
            arr[front]=-1;
            front++;
        }
    }

    int getRear(){
        if(rear==-1){
            //Empty Queue
            return -1;
        }
        else if(rear<front){
            //in this case the rear element will be size-1 
            return arr[size-1];
        }
        else{
            return arr[rear];
        }
    }

    
    int getFront(){
        if(front==-1){
            //Empty Queue
            return -1;
        }
                
        else if(rear<front){
            //in this case the front element will be arr[rear]
            return arr[rear];
        }
        
        else{
            return arr[front];
        }
    }

    void Print(){
        cout << "Printing Queue FRONT: " << front << " REAR: "<< rear << endl;
        for(int i=0;i<size;i++){

            cout << arr[i] << " ";
        }
        cout << endl;
    }


};


int main()
{   
    CQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //Popping Element
    q.pop();
    q.pop();
    q.pop();
    q.pop();


    //Pushing After Popping in deleted Position 
    q.push(100);


    cout << endl;
    q.pop();
    q.Print();

    cout << "FRONT element is :"<< q.getFront() << endl;
    cout << "REAR element is :"<< q.getRear() << endl;



    return 0;
}