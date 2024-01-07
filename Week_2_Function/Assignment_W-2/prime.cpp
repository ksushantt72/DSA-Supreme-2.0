#include<iostream>
using namespace std;

//FunctionDeclaration
bool PrintPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
           return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    //FunctionCall
    int prime=PrintPrime(n);
    if(prime){
        cout << "The number is Prime Number";   
    }
    else{
        cout << "The number is not prime";
    }

}