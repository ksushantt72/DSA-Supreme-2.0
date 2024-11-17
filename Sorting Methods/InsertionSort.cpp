#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int arr[],int size){
    int n=size;
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

void createArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << "Enter the Inout for Index :- "<< i << " : ";
        cin >> arr[i];
    }
}

int main(){
    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    createArray(arr,size);
    PrintArray(arr,size);
    InsertionSort(arr,size);
    cout << "Printing the ARray after Insetion Sort"<< endl;
    PrintArray(arr,size);
}