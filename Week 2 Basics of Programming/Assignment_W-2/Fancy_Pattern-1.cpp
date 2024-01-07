#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int row=0;row<n;row++){
        int Start_Numbering=8-row;
        int numb=row+1;
        int repeat_numbering=numb;


        for (int col=0;col<17;col++){
            if(col==Start_Numbering && repeat_numbering>0){
                cout << numb;
                Start_Numbering+=2; //Same can be written as (start_numbering=start_numbering+2)
                repeat_numbering--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }


}