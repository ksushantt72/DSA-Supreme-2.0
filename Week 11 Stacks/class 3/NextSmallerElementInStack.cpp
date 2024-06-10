#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NextSmaller(vector<int>&ans,int arr[],int size){
    //we will create a stack for storing smaller elements
    stack<int>st;
    //now we will insert the first bottom element as -1
    //because while traversal from the right side to the left,
    //rightmost element doesnot have next element
    //so in that case we will initialise -1
    st.push(-1);

    //Now using "for" loop for the traversal
    for(int i=size-1;i>=0;i--){
        int curr=arr[i];
        //now we will compare the curr element with the 
        //top element of the stack
        //jab tk top ka element g reater hai curr se tbt tk pop hoga
        while(st.top()>=curr){
            st.pop();
        } 
        //here, our top element is lesser than the curr element
        //so we will insert the top element of stack in the ans array
        //and we will push curr element in the stack for the further comparison
        //becuase it can be the smaller element for next iteration 
        ans[i]=st.top();
        st.push(curr);
    }
    // when we are out of the for loop , we will have our answer array created according to 
    //our requirement
    return ans;
}


int main(){
    int arr[]={8,4,6,2,3};
    int size=sizeof(arr)/sizeof(int);

    //creating a vector of specific size
    vector<int>ans(size);
    ans=NextSmaller(ans,arr,size);

    //Printing the array
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;
}