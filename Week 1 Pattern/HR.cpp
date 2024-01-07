#include<iostream>
using namespace std;

int main (){

    //Hollow Rectangle
    

    for (int row=0;row<4;row++){
        for (int col=0;col<7;col++){
            if(row==0 || row == 3){
                cout << "* ";
            }
            else{
                if(col==0 || col==6){
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