#include<iostream>
using namespace std;

    //Function Declaration

    bool CheckPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
        cout << endl;
    }

int main(){
    int n;
    cin >> n;
    //function call

    bool prime=CheckPrime(n);
    if(prime){
        cout << "The Input Number is Prime Number" << endl;
    }
    else {
        cout << "The Input Number is not a Prime number" << endl;
    }
}