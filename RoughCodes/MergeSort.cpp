#include<iostream>
using namespace std;
void Merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;

    int lenLeft=mid-s+1;
    int lenRight=e-mid;

    //Creating Left and Right Array using Heap

    int *Left = new int[lenLeft];
    int *Right = new int[lenRight];

    //Since these arrays are empty;
    //Copying values from original Array

    int k=s;
    //k----->>Starting index of Left  Array values in Original array

    for(int i=0;i<lenLeft;i++){
        Left[i]=arr[k];
        k++;
    }
    k=mid+1;
    //Copying values from original Array
    for(int i=0;i<lenRight;i++){
        Right[i]=arr[k];
        k++;
    }


    //Actual Merge Logic from here
    //Left array is already sorted
    //Right array is already sorted

    int leftIndex=0;
    int rightIndex=0;
    //yahi pr galti hogiii
    int mainArrayIndex=s;

    while(leftIndex < lenLeft && rightIndex<lenRight){
        if(Left[leftIndex]<Right[rightIndex]){
            arr[mainArrayIndex]=Left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=Right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //2 More cases
    //Case-1--->> Left Array Exhaust but right array has elements left
    while(rightIndex < lenRight){
        arr[mainArrayIndex]=Right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
    //Case-2--->> Right Array Exhaust but Left array has elements left
    while(leftIndex < lenLeft){
        arr[mainArrayIndex]=Right[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //Delete Heap Memory since work is done
    delete[] Left;
    delete[] Right;


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
    int mid=s+(e-s)/2;
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
    //Before Merge Sort
    cout << "Before Merge sort" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    //Function call
    mergeSort(arr,s,e);

    //After Merge Sort
    cout << "After Merge Sort" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}