#include<iostream>
using namespace std;
//Function Dseclaration


bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    cin >>n;

    for(int j=2;j<=n;j++){
        bool prime=checkprime(j);
        if(prime){
            cout << j << " ";
        }
    }

}