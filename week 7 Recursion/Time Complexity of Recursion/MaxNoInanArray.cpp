#include<iostream>
#include<limits.h>
using namespace std;

void Maximum(int arr[],int size,int index,int &maxi){
    if(index>=size){
        return;
    }
    // if(arr[index]>maxi){
    //     maxi=arr[index];
    // }

    maxi=max(maxi,arr[index]);
    Maximum(arr,size,index+1,maxi);
}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(int);
    int index=0;
    int maxi=INT_MIN;
    Maximum(arr,size,index,maxi);
    cout <<"Maximum Number is : " <<  maxi << endl;

}