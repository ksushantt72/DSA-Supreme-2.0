#include<iostream>
using namespace std;

int OddOccurence(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            return start;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
            //This tells us that we are at the left of our target
            //So go forward
            start=mid+2;
            //Here mid+2 because mid+1 has already been checked in if condition  
            }
            else{
                //In this case we are either at the ans or in right
                // so go behind without losing the ans
                //so we will update end=mid not mid-1
                end=mid;
            }
        }
        else{
            //This is index's odd condition
            if(arr[mid]==arr[mid-1]){
                //we are at the left of the ans
                //Go right
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        

    }
    return -1;
}


int main(){
    int arr[]={10,10,2,2,5,5,2,5,5,20,20,11,11,10,10};
    int n=15;
    int Index=OddOccurence(arr,n);
    cout << "Element is at index " << Index << " and the element is " << arr[Index] << endl;
}