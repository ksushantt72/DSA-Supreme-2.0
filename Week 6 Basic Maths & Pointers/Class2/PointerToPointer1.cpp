#include<iostream>
using namespace std;

int main(){
    int a=5;
    //Pointer to a
    int *ptr=&a;
    //pointer to ptr
    int **ptr1=&ptr;
    //Pointer to ptr1
    int ***ptr2=&ptr1;
    //Pointer to ptr2
    int ****ptr3=&ptr2;

    //Accessing using Pointer

    //Accessing a
    cout << "Here we need 5 to be Printed "<< endl;
    cout << a << endl;
    cout << *ptr << endl;
    cout << **ptr1 << endl;
    cout << ***ptr2 << endl;
    cout << ****ptr3 << endl;

    cout << endl;


    //Accessing ptr
    cout << "Here We need the Address of ptr to be Printed which is : "<< ptr << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;
    
    cout << endl;

    //Accessing ptr1
    cout << "Here We need the Address of ptr to be Printed which is : "<< ptr1 << endl;
    cout << *ptr2 << endl;
    cout << **ptr3 << endl;

    cout << endl;

    //Accessing ptr2
    cout << "Here We need the Address of ptr to be Printed which is : "<< ptr2 << endl;
    cout << *ptr3 << endl;
    
    cout << endl;
    

}