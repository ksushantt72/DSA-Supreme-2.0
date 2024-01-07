#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[][4],int rowa,int cola){
    for(int i=0;i<rowa;i++){
        for(int j=0;j<cola;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    //First-->ROW
    //Second--> COLUMN

    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int rowa=3;
    int cola=4;

    //For Initialising an array
    //We Have to atleast provide columns
    // REASON--->  c*i+j formula needs "c"

    int brr[][3]={
        {1,2,3},
        {5,6,7}
    };
    int rowb=2;
    int colb=3;

    PrintArray(arr,rowa,cola);
    return 0;
}