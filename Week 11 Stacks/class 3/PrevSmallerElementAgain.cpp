#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> PrevSmallerElement(int arr[],int size){
    vector<int>ans(size);
    //we will store our prev smaller in prev
    stack<int>st;

    //when our i is at starting point there is no prev point
    //so initialize -1 for the first element of array
    st.push(-1);

    for(int i=0;i<size;i++){
        int curr=arr[i];

        while(st.top()>curr){
            st.pop();
        }
        //here we have st.top()<curr
        ans[i]=st.top();
        st.push(curr);
    }

    return ans;



}

int main(){
    int arr[]={8,4,6,2,3};
    int size=sizeof(arr)/sizeof(int);
    vector<int>finalans=PrevSmallerElement(arr,size);

    for(auto i:finalans){
        cout << i << " ";
    }
    cout << endl;

}