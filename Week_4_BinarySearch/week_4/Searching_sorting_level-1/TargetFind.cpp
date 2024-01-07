#include<iostream>
using  namespace std;

int BinarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2 ;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    //Yahan tk agar pohoche ho to iska matlab target nhi mila
    return false;

}


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target;
    cin >> target;
    int n=9;
int ansindex=BinarySearch(arr,n,target);
if(ansindex==false){       //(Thie means False case)
    cout << "Target Not Found" << endl;
}
else{
    cout << "Target found at index "<< ansindex << endl;
}

}