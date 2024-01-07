#include<iostream>
using namespace std;

int FindDivision(int dividend,int divisor){
    int start=0;
    int end=dividend;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start <= end){
        if(mid * divisor == dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            ans=mid;
            start=mid+1;
        }
        else if(mid*divisor>dividend){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int dividend;
    int divisor;
    cout << "Enter the Number Which You want to divide i.e DIVIDEND = ";
    cin >> dividend;
    cout << "Enter the DIVISOR: ";
    cin >> divisor;

    int finalans=FindDivision(abs(dividend),abs(divisor));
    
    if(divisor<0 && dividend>0 || divisor>0 && dividend<0){
        finalans=0-finalans;
    }
    else{
        finalans=0+finalans;
    }

    cout << "the Value of Quotient is: " << finalans;
}


//This code Executed Successfully in First Trial Only