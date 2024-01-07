#include<iostream>
#include<vector>
using namespace std;



void CountZeroOne(vector<int>arr){
    int ZeroCount=0;
    int OneCount =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }
    cout << ZeroCount << " and " << OneCount << endl;

    int index=0;
    while(ZeroCount--){
        arr[index]=0;
        index++;
    }
    while(OneCount--){
        arr[index]=1;
        index++;
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}

//FunctionDefining for Sorting

void SortZeroOne(vector<int>arr){

}

int main(){
    vector<int>arr{1,0,1,0,1,1,1,1,0,0,1,0,1};
    CountZeroOne(arr);

}