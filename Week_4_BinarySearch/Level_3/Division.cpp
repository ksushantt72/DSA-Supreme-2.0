#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Function Declaration
int FindDivision(int divisor,int dividend){

    //Absolute Value Function abs(n);
    //Just make -ve value to +ve
    int k=-10;
    cout << abs(k)<< endl;


    int start=0;
    int end=dividend;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*divisor == dividend){
            return mid;
        }
        else if(mid * divisor <  dividend){
            //Answer store kr lenge
            // and we move forward to next nearest integer
            ans=mid;
            start=mid+1;
        }
        else{
            //This is the case when mid*divisor is greater than dividend
            //So we move left 
            end=mid-1;
        }
    }
    return ans;
    
}

int main(){
    int divisor=-7;
    int dividend=-35;

    
    int finalans=  FindDivision (abs(divisor),abs(dividend));

    if(divisor<0 && dividend >0 || divisor>0 && dividend <0)
    cout << "Final answer is " << 0-finalans << endl;
    else{
        cout << "Final answer is "<< finalans << endl;
    }
}
