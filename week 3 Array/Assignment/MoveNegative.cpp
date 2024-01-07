#include<iostream>
#include<algorithm>
using namespace std;

void PrintArray(int*arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void Method1(int*arr,int n){
    int start=0;
    for (int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        }
    }

}  
void Method2(int*arr,int n){
    //This method is also know as Dutch National Flag Method
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}

void Method3(int*arr,int n){
    sort(arr,arr+n);
}


int main(){
    int arr[]={-1,5,0,-3,-16,6,3,-18,8,-9};
    int n = sizeof(arr)/sizeof(int);
    PrintArray(arr,n);

    //Using Basic  Method(self)
    Method1(arr,n);
    PrintArray(arr,n);

    //Using Dutch National Flag Method
    Method2(arr,n);
    PrintArray(arr,n);

    //Using Sorting Algorithm
    Method3(arr,n);
    PrintArray(arr,n);
}