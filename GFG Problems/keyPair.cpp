#include<iostream>
using namespace std;

int PairSum(int arr[],int n,int x){
     
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(j!=i){
                sum=arr[i]+arr[j]; 
        cout << "Sum for Row Index "<< i << " is" << sum << endl;
            }
        
        }
    
    }
}

int main(){
    int arr[]={1,4,45,6,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=16;

    int ans=PairSum(arr,n,x);
    if(PairSum){
        cout << "Yes" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}