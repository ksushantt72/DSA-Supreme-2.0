#include<iostream>
using namespace std;

int PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int Sorting(int arr[],int n){
    int left=0;
    int right=n-1;
    int i=0;
    while(i<=right){
        if(arr[i]==0){
            swap(arr[i],arr[left]);
        i++;
        left++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[right]);
            right--;
        }
        else{
            i++;
        }

    }
}

int main(){
    int arr[]={2,0,1,0,1,2};
    int n=6;
    PrintArray(arr,n);
    Sorting(arr,n);
    cout << endl;
    PrintArray(arr,n);
    
}
