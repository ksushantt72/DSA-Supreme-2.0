#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintArray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}
int main(){
    vector<int>arr={11,55,22,44,33,66,88,110,77};
    sort(arr.begin(),arr.end());
    PrintArray(arr);
    
}