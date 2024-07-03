#include<iostream>
using namespace std;

//Function Declaration
void PrintArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[][4]={

        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},

    };
    //For 2D array At least Column Should be written otherwise error throw
    int row=3;
    int col=4;
    //Printing Array

    //Function call
    PrintArray(arr,row,col);
}