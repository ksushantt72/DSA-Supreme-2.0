#include<iostream>
using namespace std;

//Fucntion Declaration
void Print_even_odd(int n){
    if(n%2==0){
        cout << "The Number is EVEN";

    }
    else {
        cout << "The Number is ODD";
    }
}


int main(){
    int n;
    cout << "Enter the number :";
    cin >>n;

    //Function call
    Print_even_odd(n);

}