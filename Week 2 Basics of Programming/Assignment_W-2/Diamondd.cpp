#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //upper Half Part of Diamond
    for(int row=0;row<n;row++){
        for (int col=0;col<n-row;col++){
            cout << " ";
        }
        for (int col=0;col<2*row+1;col++){
            cout << "*";
        }
        cout << endl;
    }


    //Filling Middle Part Without Spaces(All Stars)
    for(int col=0;col<2*n+1;col++){
            cout << "*";
        }
    cout << endl;


    //Lower Half Part Of Diamond
    for(int row=0;row<n;row++){
        //for Printing Spaces
        for(int col=0;col<row+1;col++){
            cout << " ";
        }
        //For Printing Stars
        for (int col=0;col<2*n-2*row-1;col++){
            cout << "*";
        }
        cout << endl;
    }

}