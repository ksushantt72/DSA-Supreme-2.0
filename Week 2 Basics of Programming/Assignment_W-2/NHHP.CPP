#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Value of 'n' for General Rows: ";
    cin >> n;
    for(int row=0;row<n;row++){

        for(int col=0;col<row+1;col++){

            if(col==row || col==0 ||row==n-1 ){
                cout << col+1;
            }
            else {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}
