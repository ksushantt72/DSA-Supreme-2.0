//First Negative Interger in every window of k




//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> FirstNegativeInteger(long long int A[],long long int N, long long int K){
    //we will create doubly ended queue for storing answers
    deque<int>dq;
    vector<long long>ans;
    
    //creating first window of size k for so that it can be slided
    for(int i=0;i<K;i++){
        if(A[i]<0){
            //agar negative integer hai to uske index ko push kr denge front of dq mein
            dq.push_back(i);
        }
    }
    
    //now sliding starts from i=k
    for(int i=K;i<N;i++){
        //Agar dq empty hai to uss case mein 0 push krenge vector mein
        if(dq.empty()){
            ans.push_back(0);
        }
        else{
            int front=dq.front();
            ans.push_back(A[front]);
        }
        
        
        //Now SLiding the Window
        //Removal of the Elements from dq out of Range
        if(!dq.empty() && i-dq.front() >= K){
            //in this case we will pop the front element because
            //it is out of range
            dq.pop_front();
        }
        
        //Addition of New Elements 
        if(A[i]<0){
            dq.push_back(i);
        }
        
    }
    //when we are out of for loop
    //Lase case has not been completed
    if(dq.empty()){
        ans.push_back(0);
    }
    else{
        ans.push_back(A[dq.front()]);
    }
    
    return ans;
}
    
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    return FirstNegativeInteger(A,N,K);
 }