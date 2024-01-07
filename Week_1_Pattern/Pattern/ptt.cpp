#include<iostream>
using namespace std;

int main (){
  int n;
  cin >> n;
    for (int row=0; row<n; row=row+1){
      for (int col=0; col<2*row+1; col=col+1){
        if(col%2==1){
          cout << "*" ;
        }
        else{
          cout << row+1;
        }
        
      }
     cout << endl;   
    }

    //Printing Downward Numbers
    for(int row=0; row<n;row=row+1){
      for(int col=0;col<2*n-2*row-3;col=col+1){
        if(col%2==1){
          cout << "*";
        }
        else{
          cout << n-row-1;
        }
      }
      cout << endl;
    }
}