#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int row=0;row<n;row++){
        //for 1st Part
        for(int col=0;col<row+1;col++){
            cout << "*";
        }

        //For Spaces

        for(int col=0;col<2*n-2*row-1;col++){
            cout <<" ";
        }

        //For 2nd Part
        for(int col=0;col<row+1;col++){
            cout << "*";
        }
        cout << endl;
    }

    for(int row=0;row<2;row++){
        for(int col=0;col<2*n+1;col++){
            cout << "*";
        }
        cout << endl;
    }




    //For Lower Part
    for(int row=0;row<n;row++){
        //1st Part Of Lower Part
        for(int col=0;col<n-row;col++){
            cout << "*";
        }
        //For Spaces
        for(int col=0;col<2*row+1;col++){
            cout << " ";
        }
        //Again Stars Printing
        for(int col=0;col<n-row;col++){
            cout << "*";
        }
        cout << endl;
    }
}