#include<iostream>
#include<cstring>
using namespace std;

int solve(int numm1,int numm2){
    int sol = numm1+ numm2;
    string ans=to_string(sol);
    return sol;
}

int main(){
    string num1 = "11";
    string num2 = "123";

    int numm1 = stoi(num1);
    int numm2 = stoi(num2);

    cout << numm1 << " " << numm2 << endl;
    int finalans=solve(numm1,numm2);
    cout << finalans << endl;
}