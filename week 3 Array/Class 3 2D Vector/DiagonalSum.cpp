#include<iostream>
using namespace std;

int PrintArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int DiagonalSum(int arr[4][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
 cout << sum << " ";

}

int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };
    int row =4;
    int col=4;

    PrintArray(arr,row,col);
    cout << endl;
    DiagonalSum(arr,row,col);
}