#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a=5;
    cout << "Printing a : "<< a << endl;

    int &k=a;
    k++;
    cout << "Printing k : "<< k << endl;

    int &n=a;
    cout << "Printing n : "<< n << endl;

    int &c=a;
    cout << "Printing c : "<< c << endl;


}