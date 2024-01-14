#include<iostream>
using namespace std;

// Function Declaration for GCD

int GCD(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    while(a>0 && b>0){
        if(a>b){
            a-=b;
        }
        else {
            b-=a;
        }
    }
    return a==0 ? b : a;
}

int main(){
    int a,b;
    cout << "Enter the Numbers for which you want LCM " << endl;
    cin >> a >> b;
    cout << "Input Numbers are -->> "<< a << " and " << b << endl;

    cout << endl;

    //We know that LCM(a,b)= (a*b)/(GCD(a,b))
    //Finding GCD of a and b first
    cout << GCD(a,b) << endl;
    cout << "LCM of the Input Numbers are " << (a*b)/(GCD(a,b)) << endl;
}