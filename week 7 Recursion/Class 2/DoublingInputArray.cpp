#include<iostream>
using namespace std;

void Double(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    arr[index]=arr[index]*2;
    Double(arr,size,index+1);
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(int);
    int index=0;
    Double(arr,size,index);
    //Printing array Now
    for(auto i:arr){
        cout << i << " ";
    }    
    cout << endl;


}