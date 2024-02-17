#include<iostream>
using namespace std;

bool CheckSorted(int arr[],int size,int index){
    if(index>=size){
        //Base Case hit
        return true;
    }
    //Ek case Khud solve karo baaki Recursion Sambhal lega
    if(arr[index]<arr[index+1]){
        return CheckSorted(arr,size,index+1);
    }

    else{
        return false;
    }

}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(int);
    int index=0;

    if(CheckSorted){
        cout << "The Array is Sorted" << endl;
    }
    else {
        cout << "The Array is Not sorted" << endl;
    }

}