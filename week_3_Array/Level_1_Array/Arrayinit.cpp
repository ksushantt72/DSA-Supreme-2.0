#include <iostream>
using namespace std;

int main() {
    //array Creation

    int arr[102];
    char ch[200];
    bool flags[223];
    long num[300];
    short nums[2002];




    cout << "Array Created Successfully"<< endl;

    int a=5;
    cout << "Address of a is : " << &a << endl;
    cout << "Size of a is : " << sizeof(a) << endl;

    int brr[200];
    cout << "Address of array brr is : "<< &brr << endl;
    cout << "Size of Array brr is : "<< sizeof(brr) << endl;


    int drr[]={2,4,6,8,10,12,16};
    int err[5]={2,4,5,6,7};
    int frr[5]={2,3,4};
    //int grr[2]={1,2,3,4,5};  //---->> this will throw error because momory alloted is less than required


    int hrr[10];
    //Taking input in an array
    int n=10;
    for (int i=0;i<n;i++){ 
        cout << "Input the integer corresponding to index "<< i << " : "; 
        cin >> hrr[i];
        
    }

    //accesing the values stored in array corresponding to index

    for(int i=0;i<n;i++){
        cout << hrr[i] << " ";
    }






    return 0;
      
}