#include<iostream>
using namespace std;

void Merge(int arr[],int left,int right){

    int mid=(left+right)/2;

    int lenleft=mid-left+1;
    int lenright=right-mid;


    //Now we will create Temporary Array to store these Values for Comparing
    //Using Heap Memory
    int *leftArray = new int[lenleft];
    int *rightArray= new int[lenright];
    
    int k = left;
    //Where k is the starting index of MainArray
    
    //For Left Array
    for(int i=0;i<lenleft;i++){
        leftArray[i]=arr[k];
        k++;
    }
    

    k=mid+1;
    //For Right Array
    for(int i=0;i<lenright;i++){
        rightArray[i]=arr[k];
        k++;
    }

    //Till here the left and right Array has been created successfully with Values inside it

    //Now we will Compare and replace the Values in Main Array

    //for iterating on left Array we will create LeftIndex and right array we create rightindex
    int leftIndex=0;
    int rightIndex=0;


    //this is the point where major people do blunder 
    //Kyuki mainarrayindex 0 se start nahi hoga
    //mainarrayindex main array ko starting se replace kr rha hai
    //so mainarray index left se start hogi
    int mainArrayIndex=left;

    while(leftIndex < lenleft && rightIndex < lenright){
        if(leftArray[leftIndex] < rightArray[rightIndex]){
            arr[mainArrayIndex] = leftArray[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = rightArray[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //2 Cases Arise when one of the two array exhaust first

    // case 1 (when LeftArray exhaust and rightArray has still some ELements)
    while(rightIndex < lenright){
        arr[mainArrayIndex]=rightArray[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    
    // case 2 (when RightArray exhaust and LeftArray has still some ELements)
    while(leftIndex < lenleft){
        arr[mainArrayIndex]=leftArray[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //Since Our Work is done , we will delete the temp heap array 
    delete[] leftArray;
    delete[] rightArray;

}

//Function Declaration for Merge Sort

void MergeSort(int arr[],int left,int right){
    //Base Case Till which Loop runs
    if(left == right){
        return;
    }
    int mid=(left+right)/2;
    //Break
    //1st part will be from (left -->> mid)
    MergeSort(arr,left,mid);
    //2nd part will be from (mid+1 -->> right)
    MergeSort(arr,mid+1,right);

    //Finally we will merge the arrys accordingly when sorting
    Merge(arr,left,right);
}



int main(){
    int arr[]={5,6,7,8,1,2,3,9};
    int size=sizeof(arr)/sizeof(int);
    int left=0;
    int right=size-1;
    cout << "Before MergeSort Calling" << endl;
    
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl;


    MergeSort(arr,left,right);
    
    cout << "After MergeSort Calling" << endl;
    
    for(auto i:arr){
        cout << i << " ";
    }



}