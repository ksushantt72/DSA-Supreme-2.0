#include<iostream>
using namespace std;

int Search(int arr[],int size,int index,int target){
    if(index >= size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    //Recursive call
    int AageKaAns = Search(arr,size,index+1,target);
    return AageKaAns;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    int index=0;
    int target;
    cout <<"Enter the Value of Target ";
    cin >>target;

    //Now Calling Function
    int finalans=Search(arr,size,index,target);
    cout <<"Target index is : " << finalans << endl;
}