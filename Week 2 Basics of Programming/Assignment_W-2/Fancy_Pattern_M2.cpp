#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        int Numb_index_starting=8-row;
        int num=row+1;
        int repeat=num;

        
        for(int col=0;col<17;col++){
            if(col==Numb_index_starting && repeat>0){
                cout << num;
                Numb_index_starting+=2;
                repeat--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}