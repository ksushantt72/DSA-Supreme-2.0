#include<iostream>
using namespace std;

bool Search(int arr[],int size,int index,int target){
    if(index >= size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    //Recursive call
    bool AageKaAns = Search(arr,size,index+1,target);
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
    if(finalans){
        cout << "Target Found" << endl;
    }
    else {
        cout << "Target Not Found"<< endl;
    }
}