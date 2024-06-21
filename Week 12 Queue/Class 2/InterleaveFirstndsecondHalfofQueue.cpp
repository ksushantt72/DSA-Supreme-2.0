#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> InterleavingQueue(queue<int>&q)
{
    int n=q.size();
    int mid=n/2;
    //we will store first half elements of queue in new queue named first
    queue<int>first;
    while(mid!=0){
        int frontElement=q.front();
        first.push(frontElement);
        q.pop();
        mid--;
    }
    //when we are out of while loop our newQueue (first) has been created
    //which contains the first half elements of queue
    //and the second half elements are still within the "q"

    //Now we will use while loop and push each queue's one element as a time to create interleave
    queue<int>merged;
    while(!q.empty() || !first.empty()){
        int qFront=q.front();
        q.pop();
        int firstFront=first.front();
        first.pop();
        merged.push(firstFront);
        merged.push(qFront);

    }
    return merged;
}

void PrintQueue(queue<int>&q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    // Queue Creation
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q=InterleavingQueue(q);
    PrintQueue(q);
    return 0;
}