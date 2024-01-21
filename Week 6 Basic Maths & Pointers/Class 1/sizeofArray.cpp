#include<iostream>
using namespace std;

//Declaring Solve function 
void solve(int *arr,int n){
    cout << "Printing the Size of arr inside function : "<< sizeof(arr) << endl;
    cout << "Inside Solve ---->> arr : " << arr << endl;
    cout << "Inside Solve ---->> &arr : " << &arr << endl;

    *arr=*arr+1;
    //from this only 10 of arr will be chaged to 11
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    cout << "Size of arr inside main : "<< sizeof(arr) << endl;
    cout << "Inside Main ---->> arr : " << arr << endl;
    cout << "Inside Main ---->> &arr : " << &arr << endl;

    solve(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}