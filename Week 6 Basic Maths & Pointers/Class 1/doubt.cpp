#include<iostream>
using namespace std;

void Increment(int &a){
    a=a+1;
    cout << &a << endl;
}

int main(){
    int a=5;
    cout << &a << endl;
    Increment(a);

}