#include<iostream>
using namespace std;


//Function Declaration 
void PrintArray(int arr[],int size,int index){
    //Base case
    if(index>=size){
        return;
    }
    //Printing
    
    PrintArray(arr,size,index+1);
    cout << arr[index] << " ";
}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    int index=0;
    PrintArray(arr,size,index);
}