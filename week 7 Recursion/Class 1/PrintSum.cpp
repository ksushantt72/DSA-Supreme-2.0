#include<iostream>
using namespace std;

//Function Declaration using Recursion 
int Sum(int n){
    //Base Condition
    if(n==0){
        return 0;
    }
    int finalans = n + Sum(n-1);
    return finalans;
}

int main(){
    int n;
    cout << "Enter the Value of n till which You want Sum : ";
    cin >> n;
    cout << "The Sum till "<< n << " is " << Sum(n);
    cout << endl;
}