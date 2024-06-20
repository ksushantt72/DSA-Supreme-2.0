#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void ReverseKelement(queue<int>&q,int k){
    stack<int>st;
    int n=q.size();
    //Now we will first store the k elements over here 
    int tempk=k;
    if(k>n || k==0){
        return;
    }
    while(tempk!=0){
        st.push(q.front());
        q.pop();
        tempk--;
    }
    //Now our stack has k elements and k elements has popped from queue's front
    //Now we will push elements from stack back into queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    //Now our stack is empty and queue has elemets

    //Now we will move the unreversed elements to last of the queue
    int count=n-k;
    while(count!=0){
        int element=q.front();
        q.push(element);
        q.pop();
        count--;
    }


}


void Print(queue<int>&q){
    while(!q.empty()){
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

    int k;
    cout << "Enter the Value of k : ";
    cin >> k;

    //Call Your function here
    ReverseKelement(q,k);
    //Print Queue
    cout<< "Printing Queue :- ";
    Print(q);



    return 0;
}