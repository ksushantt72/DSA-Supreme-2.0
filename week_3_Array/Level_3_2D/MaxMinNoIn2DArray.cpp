#include<iostream>
#include<limits.h>
using namespace std;

//Input taking Array
int InputArray(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "Enter the Value for Row Index " << i << " and column Index " << j << " ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

//Print Array
int PrintArray(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
 int MaxNo(int arr[3][4],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        
    }
    cout <<"Maximum Number in the Array is " <<  max << endl;
 }

 //Minimum Function
int MinNo(int arr[][4],int row,int col){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout << "Minimum Number in the Array is :" << min << endl;
}


int main(){
    int arr[3][4];
    int row=3;
    int col=4;
    


    InputArray(arr,row,col);
    PrintArray(arr,row,col);
    MaxNo(arr,row,col);
    MinNo(arr,row,col);
}