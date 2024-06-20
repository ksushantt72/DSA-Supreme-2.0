#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void ReverseQueue(queue<int>&q){
    //Base Case
    if(q.empty()){
        return;
    }

    //solving One case myself
    int temp=q.front();
    q.pop();
    //front element popped
    
    //Recursive Call
    ReverseQueue(q);

    //Backtracking
    q.push(temp);
    
}


//Print Queue
void PrintQueue(queue<int>&q){
    while ((!q.empty())){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    //Queue Creation 
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    ReverseQueue(q);

    PrintQueue(q);




    return 0;
}