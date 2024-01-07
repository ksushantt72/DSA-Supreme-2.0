#include <iostream>
using namespace std;

int PrintSum(int a, int b, int c){
        int sum = a + b + c;
        return sum;
    }

int main(){
    //Function Call
       cout << "Sum is :" << PrintSum(5,6,70) << endl;
}

// When Using Return Statement

// int PrintSum(int a, int b, int c){
//     int ans= a+b+c;

//     return ans;
// }

// int main(){
//    int sum = PrintSum(5,6,7);
//    cout << "Sum is :"<< sum << endl;

// }

// void MessagePrint(){
//     cout << "Msg1" << endl;
    
//     cout << "Msg2"<< endl;
//     return;
// }
// int main (){
//     MessagePrint();

// }