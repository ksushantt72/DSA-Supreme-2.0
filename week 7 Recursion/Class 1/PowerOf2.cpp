#include<iostream>
using namespace std;

//Function Declaration 
int PowerOf2(int n){
    //Base Case
    if(n==0){
        return 1;
    }
    int finalans=2 * PowerOf2(n-1);
    return finalans;

    
}


int main(){
    //Function Call
    int n;
    cout << "Enter the Value of power of 2 : ";
    cin >> n;
    cout << PowerOf2(n);
}