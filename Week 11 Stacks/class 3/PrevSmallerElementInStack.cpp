#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void PrevSmaller(vector<int>&ans,int arr[],int size){
    //Creating a stack for storing the previous Smaller element
    stack<int>st;
    st.push(-1);
    //for loop for the traversal on the array 
    for(int i=0;i<size;i++){
        int currElement=arr[i];
        //Now comparison
        while(st.top()>=currElement){
            //jab tk stack ka top element greater hai
            //curr element se tbtk pop kr do stack
            //so that we will get previous smaller element
            //Note: aage badhte waqt hm piche ka smaller store krte hain stack me
            //taaki mujhe baar baar same element ko compare na karna pare
            st.pop();
        }
        //when we are here, it means stack has smaller element which lies  before the array's curr. Index
        //is in the stack's top position 
        ans[i]=st.top();
        //Now we will push the curr element in the stack so that it can be compared in the firther traversal 
        st.push(currElement);
    }
    // cout << ans[0];

}

int main(){
    int arr[]={8,4,6,2,3};
    int size=sizeof(arr)/sizeof(int);
    
    
    //creating ans array for storing answer
    vector<int>ans(size);
    PrevSmaller(ans,arr,size);

    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;





}
