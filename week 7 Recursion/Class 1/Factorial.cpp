#include<iostream>
using namespace std;

int Factorial(int n){
    //Base Condition

    if(n==1){
        return 1;
    }

    if(n==0){
        return 1;
    }

    //Recursive Relation
    int recursionKaAns=Factorial(n-1);

    //Processing
    int finalans=n*recursionKaAns;
    return finalans;

}



int main(){
    int n;
    cin >> n;
    cout << Factorial(n) << endl;
}