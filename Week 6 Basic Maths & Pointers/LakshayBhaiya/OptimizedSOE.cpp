#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Function Declaration of returning sieve
vector<bool>Sieve(int n){
    
    vector<bool>Marking(n+1,true);

    // From this code we have marked all indexes as prime i.e true
    //Our approach will be to  mark those indexes  "false" which are "not prime"

    //Exceptional cases
    Marking[0]=Marking[1]=false;
    for(int i=2;i*i<n;i++){
        if(Marking[i]==true){
            //we will be marking those false which are in the table of i
            //if i=2 which is prime then we will mark 4,6,8,10 ..... as false;
            int j=i*i;  //First Optimization 

            while(j<=n){
                Marking[j]=false;
                //Updating j 
                j+=i;
            }
        }
    }
    return Marking;
}


int main(){
    vector<bool>ans=Sieve(25);
    ///Here we will print the Numbers which contain true
    for(int i=0;i<26;i++){
        if(ans[i]){
            cout << i << " ";
        }
        
    }
    cout << endl;

}