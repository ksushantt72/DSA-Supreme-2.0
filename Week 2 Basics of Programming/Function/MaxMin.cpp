#include <iostream>
using namespace std;

//This one is bad practice->

// void MaxNumbers(int a, int b, int c){
//     if (a>b && a>c){
//         cout << "Maximum Number is :" << a;
//     }
//     else if (b>c && b>a){
//         cout << "Maximum Number is :" << b ;

//     }
//     else {
//         cout <<"Maximum Number is :"<<  c;
//     }
// }
// int main (){
//     MaxNumbers(5,7,7);
// }

//Defining Function -->
void PrintMaximum(int num1,int num2,int num3){
    int ans= max(num1,num2);
    int finalans=max(ans,num3);
    cout << "Maximum Number is :"<< finalans<< endl;
}

int PrintMinimum(int num1,int num2,int num3){
    int ans=min(num1,num2);
    int finalans=min(ans,num3);
    // cout << "Minimum Number is :"<< finalans <<endl;
    return finalans;
}


int main(){
    
    int n1,n2,n3;
    cin >>n1;
    cin >>n2;
    cin >>n3;
    //Function call -->
    PrintMaximum(n1,n2,n3);
    int fun=PrintMinimum(n1,n2,n3);
    cout << "Minimum number is :" << fun << endl;
}