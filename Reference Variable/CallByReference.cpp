#include<iostream>
using namespace std;

void incrementBy1(int&n){
    n=n+1;
    
}


int main(){
    int n = 5;
    cout << n << endl;
    //since we have passed n as reference then on calling  then the n will be updated
    //even if we have not returned then n will be updated because we have passed it 
    //by reference

    incrementBy1(n);
    cout << n << endl;

}