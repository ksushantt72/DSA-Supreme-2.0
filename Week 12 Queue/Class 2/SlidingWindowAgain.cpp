#include <iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;

void FirstNegative(int*arr,int n,int k){
    //Creating deque for storing our answer
    deque<int>dq;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    //when we are here one window of k has been completed
    //now we will just slide the window till last
    //starting from k 
    for(int i=k;i<n;i++){
        //Sabse pehle dq ke front element ko print krenge
        if(dq.empty()){
            cout << "0 "; 
        }
        else {
            cout << arr[dq.front()] << " ";
        }

        //Now updation of dq
        // removal of elements from dq if out of range
        if(i-dq.front() >= k){
            dq.pop_front();
        }
        //addition of elements from array to dq if negative
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    //since last element can't be printed because loop terminates just before printing
    //so printing the last case
    if(dq.empty()){
        cout << "0 ";  
    }
    else{
        cout << arr[dq.front()] << endl;
    }
}


int main()
{
    int arr[]={-2,0,4,-1,-5,6};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    FirstNegative(arr,n,k);
    return 0;
}