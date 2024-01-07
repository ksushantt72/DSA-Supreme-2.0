//LEETCODE PROBLEM
//204. Count Primes
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n==0){
            return 0;
        }
        //First step will be to create a vector of bool
        //and mark every n element as true 
        vector<bool>Prime(n,true);
        //We will be marking 0 and 1 as not prime as they 
        //are exceptional cases
        Prime[0]=Prime[1]=false;

        //Next step will be to make a loop and traverse it to count
        int countPrime=0;
        for(int i=2;i<n;i++){
            if(Prime[i]){
                countPrime++;

                //Now we will be marking all its table element as
                //Non Prime that is false
                //For this we will create a new integer which is 2*i
                int j=2*i;
                
                while(j<n){
                    Prime[j]=false;
                    j+=i;
                }
            }
        }
        return countPrime;
    }
};