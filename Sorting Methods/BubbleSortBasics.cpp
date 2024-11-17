#include<iostream>
#include<vector>
using namespace std;


void BubbleSort(int arr[],int size){
    int n=size;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void createArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << "Enter the Inout for Index :- "<< i << " : ";
        cin >> arr[i];
    }
}

void PrintArray(int arr[],int size){
    //Printing array Logic
    cout << "Printing Array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    createArray(arr,size);
    PrintArray(arr,size);
    
    BubbleSort(arr,size);
    cout << "Printing Array After the Sorting : "<<endl;
    PrintArray(arr,size);
    return 0;
}