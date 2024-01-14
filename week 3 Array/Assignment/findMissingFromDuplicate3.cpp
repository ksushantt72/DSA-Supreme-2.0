#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findMissingFromDuplicates(int arr[] , int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            //then we will mark it negative
            arr[index-1]*=-1;
        }
    }

    //Now we will traverse the loop and check which of the element has not been marked 
    //the unmarked elements index will give us the required missiing number
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            //if it is still positive we will return that index
            cout << i+1 <<  " ";
        }
    }
}


int main(){
    int arr[]={1,3,5,3,6,8,4,4};
    int n=sizeof(arr)/sizeof(int);
    findMissingFromDuplicates(arr,n);
}