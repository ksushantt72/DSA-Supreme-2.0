#include<iostream>
using namespace std;

void FindMissing(int *arr,int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        //If it is positive then we are marking it
        //as negative and finally we will compare to find missing
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    //From this for loop we are just prinitng to see what has been marked as negative

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Now we are writing a loop to print missing number
    for(int i=0;i<n;i++){
        //if the missing element is of 3rd index then we will print 3+1=4 as missing
        //We will do for the element which is not marked that is positive
        if(arr[i]>0){
            cout << i+1 << " ";
        } 
    }
    cout << endl;
}

int main(){
    int arr[]={1,3,5,3,4};
    int n=sizeof(arr)/sizeof(int);

    FindMissing(arr,n);
    return 0;
}