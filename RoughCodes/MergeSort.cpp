#include<iostream>
using namespace std;

void Merge(int arr[],int start,int end){
    int mid=start+(end-start)/2;
    
    int lenleft=mid-start+1;
    int lenright=end-mid;

    //Creating Left and Right Array using Heap Memory

    int *left=new int[lenleft];
    int *right=new int[lenright];

    //Since both the Arrays are empty we will copy values from original array

    int k=start;
    for(int i=0;i<lenleft;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;

    for(int i=0;i<lenright;i++){
        right[i]=arr[k];
        k++;
    }

    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=start;

    //Now comparing and replacing Values in the main Array

    while(leftindex<lenleft && rightindex<lenright){
        if(left[leftindex]<right[rightindex]){
            arr[mainarrayindex]=left[leftindex];
            mainarrayindex++;
            leftindex++;
        }
        else {
            //this is the case when left[leftindex]>right[rightindex]
            arr[mainarrayindex]=right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }

    //2 More cases are still pending

    //1st---> when left array exhaust and there are elements still in right array
    while(leftindex<lenleft){
        arr[mainarrayindex]=left[leftindex];
        mainarrayindex++;
        leftindex++;
    }
    //2nd---> when right array exhaust and there are elements still in left array
    while(rightindex<lenright){
        arr[mainarrayindex]=right[rightindex];
        mainarrayindex++;
        rightindex++;
    }

    //Now we will delete the heap memory since our work is done
    delete[] left;
    delete[] right;
}


void MergeSort(int arr[],int start,int end){
    //Base Case
    if(start > end){
        //Invalid Array
        return;
    }
    if(start == end){
        //Single element
        return;
    }

    int mid=start +(end-start)/2;

    //Breaking into two Parts
    //Part-1---->> start-mid
    MergeSort(arr,start,mid);
    //Part-2---->> (mid+1)-end
    MergeSort(arr,mid+1,end);
    //Actual Merge Logic
    Merge(arr,start,end);

}

int main(){
    int arr[]={2,1,6,9,4,5};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;

    cout << "Before Merge sort Printing Array "<< endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After Merge sort Printing Array " << endl;
    MergeSort(arr,start,end);
        for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;


}