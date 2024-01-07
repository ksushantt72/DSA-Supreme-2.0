#include<iostream>
#include<vector>
using namespace std;

int PrintArray(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

//Function Declaration for SelectionSort
void SelectionSort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    vector<int>arr={44,33,55,22,11};
    int n=arr.size();
    SelectionSort(arr,n);
    PrintArray(arr);
}