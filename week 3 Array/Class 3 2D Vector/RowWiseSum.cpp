#include<iostream>
#include<vector>
using namespace std;

//Function Declaration for Row wise Sum 
int sum(int arr[3][4],int row,int col){
    for(int i=0;i<row;i++){
        //Here Initialising Sum so that
        //After every j loop it prints sum
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout << "Sum of Row (" << i << ") is " << sum << endl;
    }
}

int main(){
    int arr[3][4]={
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120}
    };
    int row=3;
    int col=4;

    //Function Call
    sum(arr,row,col);
}
