#include<iostream>
using namespace std;

void FindMissing(int *arr,int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            //Then mark is positive
            arr[index-1]*=-1;
        }
    }


    //Now Printing to check what is marked
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Now printing the Missing element from the fact that it has not been marked and
    //it is still positve even after marking

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout << i+1 << " ";
        }

    }
}

int main(){
    int arr[]={1,3,5,3,4};
    //here 2 is missing
    int n=sizeof(arr)/sizeof(int);

    FindMissing(arr,n);
    return 0;


}