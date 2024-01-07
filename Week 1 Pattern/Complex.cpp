#include<iostream>
using namespace std;

int main(){
    int num;
     cin >> num;
     int n=num/2;
     for(int row=0;row<n;row=row+1){
        //for Iverted Half Pyramid
        for(int col=0;col<n-row;col=col+1){
            cout << "*";
        }
        //for Spaces Between Them
        for (int col=0;col<2*row+1;col=col+1){
            cout << " ";
        }
        //For Inverted Half Pyramid 2
        for (int col=0;col<n-row;col=col+1){
            cout << "*";
        }
        cout << endl;
     }
     //This One is for the Downward part
     for (int row=0;row<n;row=row+1){
        for (int col=0;col<row+1;col=col+1){
            cout << "*";
            }
            for (int col=0;col<2*n-2*row-1;col=col+1){
                cout << " ";
            }
            for(int col=0;col<row+1;col=col+1){
                cout << "*";
            }
        cout << endl;
     }
     
     
}