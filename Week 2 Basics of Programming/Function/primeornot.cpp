#include<iostream>
using namespace std;

    //Function_Declaration
    bool checkprime(int n){
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
    //Function_Call
     
    bool prime=checkprime(n);
    if(prime){
    cout << "The Input Number is Prime Number";
    }
    else{
        cout << "The input Number is Not a Prime Number";
    }        
     
}

