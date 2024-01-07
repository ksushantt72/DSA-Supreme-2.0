#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int n,int target){
    int ans=-1;
    int start=0;
    int end=n-1;
    while(start<=end){
        //int mid=(start+end)/2;      //BAD PRACTICE  || CHANCE OF INTEGER OVERFLOW
        int mid=start + (end-start); //SAME THING BUT GOOD PRACTICE
                                
        if(arr[mid] == target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }

    }
    
    //Ans ko return krwana prega kyuki loop khtm ho chuka hai 
    return ans;

}

int main(){
    int arr[]={10,20,30,30,30,30,40,50,60};
    int n=9;
    int target=30;

    int ansIndex=FirstOccurence(arr,n,target);
    if(ansIndex==-1){
        cout << "Target Not Found" << endl;
    }
    else{
        cout << "Firse Occurence of Target is at Index "<< ansIndex << endl;
    }



}