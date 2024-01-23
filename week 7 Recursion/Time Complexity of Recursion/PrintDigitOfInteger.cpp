#include<iostream>
using namespace std;

void Print(int num){
    if(num==0){
        return;
    }
    int digit=num % 10;
    num=num/10;
    //Recursive call
    Print(num);
    //Print
    cout << digit << " ";

}

int main(){
    int num=4215;
    //int size = sizeof(arr)/sizeof(int);
    int index=0;
    //int target;
    //cout <<"Enter the Value of Target ";
    //cin >>target;

    //Now Calling Function
    Print(num);
}