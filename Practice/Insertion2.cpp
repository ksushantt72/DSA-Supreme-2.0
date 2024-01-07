#include<iostream>
#include<vector>
using namespace std;
void PrintArray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}

void InsertionSort(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    vector<int>arr={44,33,55,22,11};
    InsertionSort(arr);
    PrintArray(arr);
}