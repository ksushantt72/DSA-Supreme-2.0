#include<iostream>
using namespace std;

//Function Declaration
    bool KeyPair(int arr[],int n,int x){
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                int sum=0;
                if(i!=j){
                    sum=arr[i]+arr[j];
                }
                else{
                    sum!=arr[i]+arr[j];
                }
                if(sum==x){
                    return true;
                }
            }
        }
        return false;
    }

int main(){
    int arr[]={1,4,45,6,10,8};
    int n=6;
    int x;
    cout << "Enter the Value of x i.e. Sum of Two Candidates: ";
    cin >> x;
    //Function Call

    int ans=KeyPair(arr,n,x);
    if(ans){
        cout << "yes";
    }
    else{
        cout << "NO";
    }


}