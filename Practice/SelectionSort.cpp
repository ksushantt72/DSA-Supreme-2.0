//Here Our strategy will be to first initilize 1st array i to minindex
//then using inner loop compare it with every other element
//Except that one element

#include<iostream>
#include<vector>
using namespace std;

void PrintArray(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void SelectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            swap(arr[i],arr[minIndex]);
        }
    }
}

int main(){
    vector<int>arr={44,33,55,22,11};
    SelectionSort(arr);
    PrintArray(arr);
}