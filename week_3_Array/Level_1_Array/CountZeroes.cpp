#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << "Array Corresponding to Index " << i << " is "<< arr[i]<< endl;
    }
}

void CountZeroOne(int arr[],int size){
    int Zeroes=0;
    int Ones=0;
    for (int i=0;i<size;i++){
        if(arr[i]==0){
            Zeroes=Zeroes+1;
        }
        else{
            Ones=Ones+1;
        }
    }
    cout <<"Number of Zeroes are :" <<  Zeroes  << " and " << "Ones are :" << Ones << endl;
}

int main(){
    int arr[]={0,1,1,1,0,1,0,1,0,1,0,1,1,1,1,0,1,0,1,0};
    int size=20;
    PrintArray(arr,size);
    CountZeroOne(arr,size);

}