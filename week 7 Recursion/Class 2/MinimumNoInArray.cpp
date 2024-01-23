#include<iostream>
#include<limits.h>
using namespace std;

void Minimum(int arr[],int size, int &mini,int index){
    if(index>=size){
        return;
    }
    if(arr[index]<mini){
        mini=arr[index];
    }
    Minimum(arr,size,mini,index+1);
    
}

int main(){
    int arr[]={100,90,80,70,60,50,40,30,20,10};
    int size=sizeof(arr)/sizeof(int);
    int mini=INT_MAX;
    int index=0;
    Minimum(arr,size,mini,index);
    cout << mini << endl;

}