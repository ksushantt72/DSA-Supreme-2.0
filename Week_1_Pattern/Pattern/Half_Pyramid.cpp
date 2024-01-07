#include <iostream>
using namespace std;

int main(){
    //Erect Half Pyramid
      int n;
    cin >> n;

    for (int row=0;row<n;row=row+1){
        for (int col=0;col<n-row;col=col+1){
            cout << "* ";
        }
        cout << endl;
    }
    
    //Inverted Half Pyramid
    // int n;
    // cin >> n;
    // for (int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}