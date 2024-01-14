#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MoveNegative(int*arr,int n){
    //Method-1
    int start=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        }

    }
}

//Method-2
//Dutch National Flag
int MoveNegatives(int*arr,int n){
    int l=0;
    int e=n-1;
    while(l<e){
        if(arr[l]<0){
            l++;
        }
        else if(arr[e]>0){
            e--;
        }
        else{
            //This is the condition where we have two condition running in else
            //1.arr[l]>0 
            //2.arr[e]<0
            swap(arr[l],arr[e]);
        }
    }
}

int main(){
    int arr[]={1,2,-3,4,-5,6,0};
    int n=7;
    //Function Call
    MoveNegative(arr,n);
    //Printing Array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}