#include<iostream>
#include<vector>
using namespace std;

//Function
 int RotateArray(int arr[],int n){
    vector<int>ans(n);
    int k=3;
    for(int i=0;i<n;i++){
        int newIndex=(i+k)%n;
        ans[newIndex]=arr[i];
    }
    cout << endl;
    for (int j=0;j<n;j++){
        cout << ans[j] << " ";
    }
    
}

int PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;


    
    PrintArray(arr,n);
    cout << endl;
    RotateArray(arr,n);

}
