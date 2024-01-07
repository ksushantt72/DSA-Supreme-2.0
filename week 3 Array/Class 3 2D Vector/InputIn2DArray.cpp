#include<iostream>
using namespace std;

void PrintArray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void PrintArray2(int arr[3][3],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3];
    int row=3;
    int col=3;

    //Taking input in Array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "Enter the Value for row Index " << i << " and column index " << j << " -->"; 
            cin >> arr[i][j];
        }
        cout << endl;
    }

    //FunctionCall
    // PrintArray(arr,row,col);
    
    PrintArray2(arr,row,col);
}