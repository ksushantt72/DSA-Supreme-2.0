#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row=0;row<n;row=row+1){
        for (int col=0;col<n;col=col+1){
            if(col==0 || col== n-1 || row==0 || row== n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}