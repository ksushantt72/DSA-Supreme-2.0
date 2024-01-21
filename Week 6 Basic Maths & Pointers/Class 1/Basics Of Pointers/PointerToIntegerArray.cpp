#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[10]={15,20,30,40,50};
    
    //Pointer to an array
    //this will print only base address's element

    int*ptr=arr;
    cout << "Priting ptr : " << ptr << endl;
    cout << "Printing Value stored in ptr address : "<< *ptr << endl;

    //Pointer to an array
    //From this we can access element to that address by using dereferece operator 
    //in an array way like (*ptrr)[0]=15,(*ptrr)[1]=20,(*ptrr)[2]=30,(*ptrr)[3]=40,

    int(*ptrr)[10]=&arr;
    cout <<"Printing ptrr : " << ptrr << endl;
    cout << "Printing the 0th address of the Pointer : " << ptrr[0] << endl;
    cout << "Printing the 4th address of the Pointer : " << ptrr[4] << endl;

    //ptrr[0]=ptrr

    cout << "Value stored at 4th address of the Pointer Array : " << (*ptrr)[4];


    //From here understanding Purpose
    int *p=arr;
    int *q=arr+1;

    cout << "arr : " << arr << endl;
    cout << "&arr : " << &arr << endl;
    cout << "arr[0] : " << arr[0] << endl;
    cout << "&arr[0] : " << &arr[0] << endl;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;
    cout << "q : " << q << endl;
    cout << "&q : " << &q << endl;
    cout << "*q : " << *q << endl;
    cout << "*p+1 : " << *p+1 << endl;
    cout << "*p+2 : " << *p+2 << endl;
    cout << "*q+2 : " << *q+2 << endl;
    cout << "*(p+3) : " << *(p+3) << endl;
    cout << "*(p+4) : " << *(p+4) << endl;


}