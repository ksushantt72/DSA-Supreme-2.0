#include<iostream>
#include<limits.h>
using namespace std;

int MinNumber(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    cout << "Minimum of the Given NUmbers is :"<< minAns;
}
int MaxNumber(int arr[],int size){
    int maxAns=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns=arr[i];
        }
    }
    cout << "Maximum of the Given NUmbers is :"<< maxAns;
}

int main(){
    int arr[]={2,5,8,12,39,79,82,236,5896,74125,8963};
    int size = 11;
    MinNumber(arr,size);
    cout << endl;
    MaxNumber(arr,size);
    
    

}