#include<iostream>
using namespace std;

int main (){
    int num;
    cin >> num;
    int n=num/2;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n+row;col=col+1){
            if(col==n-row-1 || col== n+row-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int row=0;row<n;row=row+1){
        for (int col=0;col<2*n-row-1;col=col+1){
            if(col==row || col== 2*n-row-2){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}