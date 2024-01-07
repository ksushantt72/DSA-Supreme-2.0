#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int sum=70;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<arr.size();j++){
            if(arr[j]+element==sum){
                cout << "(" << arr[j] << ","<< element << ")" << endl;
            }
        }
    }
}
