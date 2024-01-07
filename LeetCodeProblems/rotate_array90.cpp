#include<iostream>
using namespace std;

int PrintArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int Transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }    
    }
}




int main(){
    int arr [][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int row=3;
    int col=3;

    PrintArray(arr,row,col);
    cout << endl;
    Transpose(arr,row,col);
    cout << endl;
    PrintArray(arr,row,col);

    for(int i=0;i<row;i++){
        reverse(arr[i].begin,arr[i].end);
        }
    }

}