#include<iostream>
#include<vector>
using namespace std;


void PrintArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int>arr{0,1,0,0,1,1,0,1,0,1,1};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end){
        if(arr[i]==0){
            cout << "Found Zero"<< endl;
            cout << "Before Swapping ";
            PrintArray(arr);
            swap(arr[start],arr[i]);
            cout << "After  Swapping ";
            PrintArray(arr);
            start++;
            i++;
            cout << "Now i = "<< i << " , " << "start = "<< start <<" and end = "<< end <<  endl; 
        }
        else{
             cout << "Found One"<< endl;
            cout << "Before Swapping ";
            PrintArray(arr);
            swap(arr[end],arr[i]);
            cout << "After  Swapping ";
            PrintArray(arr);
            end--;
            cout << "Now i = "<< i << " , " << "start = "<< start <<" and end = "<< end <<  endl; 
             

            //here i isnot updated because we dont know 
            //that the swapped value from end is zero or one
            //so not updating it checks it again after swapping.
        }
    }

PrintArray(arr);
    
}
