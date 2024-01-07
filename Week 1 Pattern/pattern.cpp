#include <iostream>
using namespace std;

int main (){
  int n=4;
 
  for(int row=0;row<n;row=row+1){
    //printing half inverted pyramid
    for(int col=0; col<n-row; col=col+1){
      cout << "*";
    }
    //Full Pyramid Of Characters Spaces
    for(int col=0; col<2*row+1; col=col+1){
      cout << " ";
    }
    //Half Inverted Pyramid
    for(int col=0; col<n-row; col=col+1 ){
      cout << "*";
    }
    cout << endl;
  }

  //for Downward Section

  for(int row=0; row<n; row=row+1){
    //Printing Half Erect Pyramid
    for(int col=0; col<row+1; col=col+1){
      cout << "*";
    }
    //Printing Full Inverted Pyramid Of Spaces
    for(int col=0; col<2*n-2*row-1; col=col+1){
      cout << " ";
    }
    //Again Printing Half Erect Pyramid
    for(int col=0; col<row+1; col=col+1){
      cout << "*";
    }
    cout << endl;
  }

  
  
}
