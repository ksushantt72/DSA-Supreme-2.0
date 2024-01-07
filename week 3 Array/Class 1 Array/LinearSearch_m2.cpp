//Bad Practice


#include<iostream>
using namespace std;


//fUNCTION DECLARATION
    void PrintArray(int arr[],int size,int target){
        for (int i=0;i<size;i++){
            cout << arr[i]<< " ";
        }
    }

int main(){
    int arr[10]={10,20,30,40,50,60,70,1,2,3};
    int size=10;
    int target;
    PrintArray(arr,size,target);
    cin >> target;
    bool flag=0;
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            flag=1;
        }
    }

    if(flag==1){
        cout << "found"<< endl;

    }
    else{
        cout << "Not Found"<< endl;
    }
}