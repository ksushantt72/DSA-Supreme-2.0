#include<iostream>
using namespace std;

//Function Declaration 
int PrintArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] <<  " ";
        }
        cout << endl;
    }
}


void TransposeMatrix(int arr[3][3],int row,int col){
    for (int i=0;i<row;i++){
        //Here j+1 is there because we need not to swap the swapped element
        
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int row=3;
    int col=3;
    cout << "Printing Before Transpose" << endl;
    PrintArray(arr,row,col);
    cout << "Doing Transpose"<< endl;
    TransposeMatrix(arr,row,col);
    cout << "Printing After Transpose" << endl;
    PrintArray(arr,row,col);
}