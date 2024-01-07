#include<iostream>
using namespace std;

int PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void ShiftNegative(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={23,-7,10,-12,-11,40,60};
    int n=7;
    PrintArray(arr,n);
    ShiftNegative(arr,n);
    cout << endl;
    PrintArray(arr,n);

}