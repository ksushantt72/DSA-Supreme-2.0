//We have to search in nearly Sorted Array
//Condition of nearly sorted array is that
//if an element is at ith index in sorted array
// then it should be at (i-1),i,(i+1) index for the 
//array to be called nearly sorted


#include<iostream>
using namespace std;

//Function Declaration for Binary Search in Nearly Sorted Array
     
    int NearlySorted(int arr[],int n,int target){
        int start=0;
        int end=n-1;
        while(start <= end){
            int mid = start+(end-start)/2;  
            if(arr[mid-1]==target){
                return mid-1;
            }
            else if(arr[mid]==target){
                return mid;
            }
            else if (arr[mid+1]==target){
                return mid+1;
            }
            else if (arr[mid] > target){
                //left jaao;
                //Here we are wrinting mid-2 so that the checked element does not come again to be checked

                end=mid-1;
            }
            else{
                start=mid+2;
            }

        }
        return -1;
    }

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=70;

    int Index=NearlySorted(arr,n,target);

    if(Index==-1){
        cout << "Element not Found in the array "<< endl;
    }
    else {
        cout << "Element found at index "<< Index << endl;
    }
}