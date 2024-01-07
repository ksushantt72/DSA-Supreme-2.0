#include <iostream>
using namespace std;

int main(){

    int ROWS=8;
    int COLS=6;
    for(int row=0;row<ROWS;row=row+1){
        for (int col=0;col<COLS;col=col+1){
            if(row==0 || row== ROWS-1){
                cout << "* ";
            }
            else{
                if(col==0 || col==COLS-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}