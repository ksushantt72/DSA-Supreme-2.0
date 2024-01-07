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


//Searching Function
bool SearchArray(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20},
    };

    int row=5;
    int col=4;

    PrintArray(arr,row,col);
    int target;
    cin >> target;
    int ans=SearchArray(arr,row,col,target);
    if(ans){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

}