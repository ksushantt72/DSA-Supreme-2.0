#include<iostream>
#include<vector>
using namespace std;

int Sum(int arr[3][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
    }
    return sum;
}




int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row=3;
    int col=3;
     
    int ans=Sum(arr,row,col);
    cout << "Total Sum of ELements in the Array is "<< ans << endl;
}