#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(int);
    int(*ptr)[9]=&arr;
    cout << "arr : " << arr << endl;
    cout << "*arr : " << *arr << endl;
    cout << "&arr : " << &arr << endl;
    cout << "(*ptr)[2] : " << (*ptr)[2] << endl;
    cout << "&arr[3] : " << &arr[3] << endl;

    for(int i=0;i<n;i++){
        cout << &arr[i] << " ";
    }
    cout << endl;

}