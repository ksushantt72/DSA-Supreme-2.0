#include<iostream>
using namespace std;

//Function Declaration
float PrintAreaOfCircle(float r){
    float area=3.14*r*r;
    // cout << "Area Of Cirle for Input Radius is : " << area << " cm Square" << endl;
    return area;
}





int main(){
    float r;
    cout << "Enter the Radius Of cirle(in cm): ";
    cin >> r;

    //Function Call
    float area=PrintAreaOfCircle(r);
    cout << "Area Of Cirle for Input Radius is : " << area << " cm Square" << endl;
}