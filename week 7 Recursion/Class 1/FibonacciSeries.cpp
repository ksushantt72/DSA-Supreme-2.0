#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int finalans=Fibonacci(n-1)+Fibonacci(n-2);
    return finalans;
}

int main(){
    cout << Fibonacci(7);
}