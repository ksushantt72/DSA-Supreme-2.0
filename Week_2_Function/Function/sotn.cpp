#include<iostream>
using namespace std;


void PrintMaximum(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        cout << "Maximum Number is :"<< num1 << endl;
    }
    else if(num2 >= num3 && num2>=num1){
        cout << "Maximum Number is :"<< num2 << endl;
    }
    else {
        cout << "Maximum Number is :"<< num3 << endl;
    }
    
}

int main (){
    PrintMaximum(4,5,6);
}





// int PrintSum(int a,int b, int c){
//     int ans=a+b+c;
//     return ans;
// }

// int main(){
//   int sum = PrintSum(4,4,4);
//   cout << "" << sum << endl;
// }




// void PrintSum( int a, int b, int c){
//     int ans= a+b+c;
//     cout << "Sum is:"<< ans << endl;
// }

// int main(){
//     PrintSum(1,2,7);

// }