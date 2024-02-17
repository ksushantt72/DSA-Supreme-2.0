#include<iostream>
using namespace std;
//Function declaration

//This is the Function in which we have passed the string by value
//So this will take extra memory

void PrintPermutationValue(string str,int i){
    if(i>=str.length()){
        //Print String 
        cout << str << " ";    
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        //Recursion 
        PrintPermutationValue(str,i+1);
    }

}

//This is the same function of Print Permutation where we have passed 
//string by reference

void PrintPermutationReference(string &str,int i){
    if(i>=str.length()){
        //Print String 
        cout << str << " ";
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        //Recursion 
        PrintPermutationReference(str,i+1);
        //Since we have passed it by reference then on return call we have to 
        //swap it again as original string because on passing by reference 
        //all the changes in current string changes the main string too 

        //So here comes Backtracking where we will do our work by first swapping and
        //when our work is done we will swap it again so that non change is done to 
        //original string

        swap(str[i],str[j]);   //--------->> BackTracking
        
    }

}


int main(){
    string str="abc";
    int i=0;
    //Function Call
    //Pass by value (doesnot require Backtracking  it takes extra memory)
    PrintPermutationValue(str,i);
    cout << endl;

    //Pass by Reference (Requires Backtracking  but doesnot take extra memory)
    PrintPermutationReference(str,i);
}


//Backtracking--->>it is simple recursion and when coming back from recursive call
//we do some additional operation and this additional operation is called Backtracking 