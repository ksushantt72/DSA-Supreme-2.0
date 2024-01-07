#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "Enter the Value for row index "<< i <<" and column index " << j << " : ";
            cin >> arr[i][j];
        }
    }

    PrintArray(arr,row,col);
}