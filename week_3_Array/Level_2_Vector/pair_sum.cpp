#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Pair Sum
    vector<int>arr{10,20,30,40,50,60,70,80};
    int sum=70;//required

    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        //For every element traverse the loop
        for(int j=0;j<arr.size();j++){
            //Finding Pair which gives sum=70
            if(element+arr[j]==sum){
                cout <<"Pair Found i.e " <<  "(" <<  element << ";"<< arr[j]<< ")"<<" Which gives sum=70"<< endl;
            }
        } 
    }
}