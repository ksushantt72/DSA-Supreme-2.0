#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[4]={1,2,3,4};
    

    //Creating Array of Pointers
    int *arr[4];
    //storing address of nums in array
    for(int i=0;i<4;i++){
        arr[i]=&nums[i];
    }

    //Accessing address stored in arr
    for (int i=0;i<4;i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    //Accessing value stored at address stored in arr(using dereference operator)
    for(int i=0;i<4;i++){
        cout << *arr[i] << " ";
    }
    cout << endl;
}