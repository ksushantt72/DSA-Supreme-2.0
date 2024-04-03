#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the Marks " << endl;
    cin >> marks;

    marks>=33 ? (cout << "You are Passed "): cout << "You are failed";
}