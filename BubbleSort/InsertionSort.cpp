#include<iostream>
#include<vector>
using namespace std;

void PrintArray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;  //Insertion

    }
}

int main(){
    vector<int>arr={33,11,55,66,44,22};
    InsertionSort(arr);
    PrintArray(arr);
}