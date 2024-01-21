#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int num = 100;
    cout << "Printing num : " << num << endl;
    cout << "Address of num : " << &num << endl;

    //Creation of Pointer
    //In Simple words * before Variable Name is used to define Pointer
    //Always remember that the Pointer always stores the address of Variable

    int *ptr = &num;
    cout << "Printing the ptr : " << ptr << endl;
    cout << "Printing the Address of ptr : "<< &ptr << endl;
    cout << "Printing Value Stored at address stored in Pointer : "<< *ptr << endl;
    cout << "Printing the Size of ptr : "<< sizeof(ptr) << endl;

    char ch='p';
    char *cptr=&ch;
    cout << "Printing the Size of cptr : "<< sizeof(cptr) << endl;


    long lachi=10;
    long*lptr=&lachi;
    cout << "Printing the Size of lptr : "<< sizeof(lptr) << endl;



}