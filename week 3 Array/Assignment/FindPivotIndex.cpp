#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BruteForceMethod(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int lsum=0;
        int rsum=0;
        //here we will be finding lsum and rsum for every i 
        for(int j=0;j<i;j++){
            lsum+=arr[j];
        }

        for(int j=i+1;j<n;j++){
            rsum+=arr[j];
        }
        //Now we will be applying our condition 
        if(lsum == rsum ){
            return i;
        }
    }
}

int PrefixSumApproach(vector<int>&arr,int n){
    //First creating lsum and rsum array where all indexex contain 0 as element
    vector<int>lsum(arr.size(),0);
    vector<int>rsum(arr.size(),0);

    //Now we will replace 0 of lsum and rsum with the actual sum
    //before the pivot index

    for(int i=1;i<n;i++){
        lsum[i]=lsum[i-1]+arr[i-1];
    }
    cout << "Printing lsum array "<< endl;

    for(int i=0;i<n;i++){
        cout << lsum[i] << " "; 
    }
    cout << endl;

    for(int i=n-2;i>=0;i--){
        rsum[i]=rsum[i+1]+arr[i+1];
    }
    cout << "Printing rsum array "<< endl;
    for(int i=0;i<n;i++){
        cout << rsum[i] << " "; 
    }
    cout << endl;

    for(int i=0;i<n;i++){
        if(lsum[i]==rsum[i]){
            cout <<"So the Pivot Index is " <<  i << endl;
        }
    }
}

int main(){
    vector<int>arr{1,7,3,6,5,6};
    int n=arr.size();
//    int ans = BruteForceMethod(arr,n);
//    cout << ans << endl;

    PrefixSumApproach(arr,n);
}