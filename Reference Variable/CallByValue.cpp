#include<iostream>
#include<vector>
using namespace std;

//we Are writing Increment function for integer
int incrementby1(int k){
    k=k+1;
    return k;

    //since we have returned n , the updated value of n will be stored in increment 
    //function 
}

int main(){
    int n=5;
    //from here n=5 is stored in the memory block

    //there is huge difference in function call we are doing below 
    //please understand it carefully Sushant baby 

    incrementby1(n);      
    cout << "n : " << n << endl;

    ///---->> this will just call the function but that doesnot mean that the
    //n will be updated because the n has been updated in the above function
    //and returned there only
    //yahan pe sirf function call hua hai n update ka koi cammand nahi hai isme


    n=incrementby1(n);
    //now this above code will update the n because n= the returned value from function
    //written above
    cout << "n : " << n << endl;


    // The code written above is called as Call by Value


}