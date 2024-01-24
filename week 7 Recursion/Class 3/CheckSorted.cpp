#include<iostream>
using namespace std;

//Function Declaration
bool CheckSorted(int arr[],int size, int index){
    //Base Condition 
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        //This means the 2 elements are sorted
        bool AageKaAns=CheckSorted(arr,size,index+1);
        return AageKaAns;
    }
    else {
        return false;
    }
}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(int);
    int index=1;


    //Passing IN Function
    int Finalans=CheckSorted(arr,size,index);
    if(Finalans){
        cout << "Array is Sorted " << endl;
    }
    else {
        cout << "Array is Not Sorted" << endl;
    }

}