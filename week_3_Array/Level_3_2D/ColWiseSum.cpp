#include<iostream>
#include<vector>
using namespace std;

int ColWiseSum(int arr[3][4],int row,int col){
    //Here using i<col because 
    //we are accesing array col wise
    for(int i=0;i<col;i++){
        //Here using j<row because 
        //we are accesing array col wise
        int sum=0;
        //here sum=0 has initialised to make sure that
        //everytime the new col is started sum starts form zero

        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout << "Sum of Column ("<< i << ") is "<< sum << endl;
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
    ColWiseSum(arr,row,col);
}