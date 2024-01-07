#include <iostream>
using namespace std;

void PrintSum(int n){

    int sum=0;

    for(int i=0;i<=n;i++){
        sum=sum+i;
        }    
        cout << "Sum Upto N is :"<< sum << endl;
    
}

int main(){
    int n;
    cin >>n ;

    PrintSum(n);

}