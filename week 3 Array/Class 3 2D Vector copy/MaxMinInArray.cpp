#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int MaxNuminArray(int arr[3][4]){
    int maxans=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]>maxans){
                maxans=arr[i][j];
            }
        }
    }
    return maxans;
}
int MinNoinArray(int arr[3][4]){
    int minans=INT_MAX;
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if (arr[i][j]<minans){
                minans=arr[i][j];
            }
        }
    }
    return minans;
}


int main(){
    //Q--> Question is to find the maximum number in an array
    int arr[3][4]={
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120}
    };
    int MaxNumber=MaxNuminArray(arr);
    cout << "Maximum Number is "<< MaxNumber << endl;
    int MinNumber=MinNoinArray(arr);
    cout << "Minimum Number in Array is " << MinNumber << endl;
    
}