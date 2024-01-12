#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool>Sieve(int n){
    vector<bool>sieve(n+1,true);
    //We have marked every elemen of Sieve as true
    //UNMARKING non-Prime as false
    sieve[0]=sieve[1]=false;
    for(int i=2;i<n+1;i++){
        if(sieve[i]==true){
            // cout << i << " ";

            int j=i*i;
            while(j<n+1){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}


int main(){
    int n;
    cin >> n;
    
    vector<bool>ans=Sieve(n);
    for(int i=0;i<n;i++){

        if(ans[i]){
        cout << i << " ";
        }
    }
    
}