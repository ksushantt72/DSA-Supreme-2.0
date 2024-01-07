#include<iostream>
using namespace std;

int main (){


    int n;
    cin >> n;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<2*n-row-1;col=col+1){
            if(col==row || col==2*n-row-2 || row==0){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}