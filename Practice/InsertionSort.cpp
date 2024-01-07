#include<iostream>
#include<vector>
using namespace std;

//Function Declaration for Printing Array

void PrintArray(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


//FunctionDeclaration For Sorting using InsertionSort Method
void InsertionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
    vector<int>arr={55,44,33,22,11};
    InsertionSort(arr);
    PrintArray(arr);
}