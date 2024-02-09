#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e){
    //TODO 
}

void mergeSort(int arr[],int s,int e){
    //Base Case
    if( s > e ){
        //Invalid Array
        return;
    }
    if(s==e){
        //Single Element
        return;
    }

    //Break
    int mid=s-(e-s)/2;
    //Recursive Call for Left Array
    //Start to mid --->> Left Part
    mergeSort(arr,s,mid);

    //Recursive Call for Right Array
    //Mid+1 to end ---->> Right Part
    mergeSort(arr,mid+1,e);

    //Now Finally Merge two sorted Arrays
    Merge(arr,s,e);
}


int main(){
    int arr[]={2,1,6,9,4,5};
    int size=6;
    int s=0;
    int e=size-1;
    mergeSort(arr,s,e);
}