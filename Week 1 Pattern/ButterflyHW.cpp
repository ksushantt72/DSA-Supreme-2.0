#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n=num/2;

    for(int row=0;row<n;row=row+1){
        //For Half Starred Pyramid
        for(int col=0;col<row+1;col=col+1){
            cout << "*";
        }
        //For Middle Spaced Portion
        for(int col=0;col<2*n-2*row-2;col=col+1){
            cout << "_";
        }
        //for another Half Starred Pyramid
        for (int col=0;col<row+1;col=col+1){
            cout << "*";
        }
        cout << endl;
    }
    //For Downward Part
    for (int row=0;row<n;row=row+1){
        //For Inverted Starred Pyramid
        for(int col=0;col<n-row;col=col+1){
            cout << "*";
        }
        //For Middle Spaced Portion
        for (int col=0;col<2*row;col=col+1){
            cout << "_";
        }
        //for Another Inverted Half Pyramid
        for (int col=0;col<n-row;col=col+1){
            cout << "*";
        }
        cout << endl;
    }
}