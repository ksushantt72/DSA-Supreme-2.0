#include<iostream>
using namespace std;

void Print(int n){
    
    //Base Condition
    if(n==1){
        cout << 1 << " ";
        return;
    }
//TAIL RECURSION
    //Processing
    cout << n << " ";
    //Recursion Call
    Print(n-1);


//HEAD RECURSION
    // //Recursion Call
    // Print(n-1);
    // //Processing
    // cout << n << " ";


    //if we just print first and call it later then it is call TAIL RECURSION
    //In Head Recursion, processing happens first and then Recursion call

    //In Tail Recursion, Recursion call takes place first and then  Processing
}

int main(){
    int n;
    cin >> n;
    Print(n);
}