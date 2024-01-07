#include<iostream>
#include<vector>
using namespace std;


//Function Declaration
int ShiftArray(vector<int>arr){
    int temp=arr[arr.size()-1];

    for(int i=arr.size()-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for(int i=0;i<6;i++){
    cout << arr[i] << " ";
    } 
}
    

int main(){

    vector<int>arr{10,20,30,40,50,60};
    int n=6;
    //Function Call
    ShiftArray(arr);



}