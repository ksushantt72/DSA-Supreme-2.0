#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>st;
    //one by one que ka element stack me push krna hai 
    while(!q.empty()){
        int frontElement=q.front();
        q.pop();
        st.push(frontElement);
    }

    //Now one by one stack se elements lo aur use queue me push krdo 
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

}

void PrintQueue(queue<int>&q){
    while(!q.empty()){
        cout << q.front()<< " ";
        q.pop();
    }
    cout << endl;
}


int main(){

queue<int>q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60); 

//Before Reversing QUeue
// cout << "Before Reversing Queue"<< endl;
// PrintQueue(q);

//After reversing Queue
reverseQueue(q);
cout << "After Reversing Queue"<< endl;
PrintQueue(q);

return 0;
}