#include<iostream>
using namespace std;

//Function Declaration for Printing Array
int PrintArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << "The Value of Array for Index " << i << " is " << arr[i]<< endl;
    }
}

//Function For Linear search

bool LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            //Found
            //Return true
            return true;
        }
    }
    return false;
}


int main(){

    int arr[10];

    //Taking input in Array
    
    int n=10;
    int size=10;
    int target;
    for(int i=0;i<n;i++){
        cout << "Enter the Input Corresponding to index "<< i << " : ";
        cin>> arr[i];
    }

    //Function Call
    PrintArray(arr,size);
    cin >> target;
    bool ans=LinearSearch(arr,size,target);
    if(ans == 1){
        cout << "Target Found";
    }
    else{
        cout << "Target Not found";
    }

}

