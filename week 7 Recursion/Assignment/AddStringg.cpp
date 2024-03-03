#include<iostream>
#include<vector>
using namespace std;

void AddString(string num1,string num2,int ptr1,int ptr2,int carry,vector<int>&ans){
    //Base Case
    if(ptr1<0 && ptr2 <0){
        return;
    }
    //Solve 1 Case
    int number1 = (ptr1 >= 0 ? num1[ptr1] : 0)-'0';
    int number2 = (ptr2 >= 0 ? num2[ptr2] : 0)-'0';

    int sum = number1 + number2 + carry;
    int digit = sum % 10;
    ans.push_back(digit);

    carry = sum/10;

    //Calling Recursion 
    AddString(num1, num2, ptr1 - 1,ptr2 - 1, carry, ans);


}


int main(){
    string num1 = "456";
    string num2 = "777";
    int carry=0;
    vector<int>ans;
    int ptr1 = num1.length()-1;
    int ptr2 = num2.length()-1;

    //Now we have to crlate a function to Add these two without any STL or CONVERSION

    AddString(num1,num2,ptr1,ptr2,carry,ans);

    cout << "Printing ans vector ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i]<< " ";
    }
}