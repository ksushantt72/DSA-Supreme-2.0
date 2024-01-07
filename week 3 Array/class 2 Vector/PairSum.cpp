#include<iostream>
#include<vector>
using namespace std;

//Function Declaration
void PairSum(vector<int>arr,vector<int>brr,int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]+brr[j]==sum){
                cout <<"(" <<  arr[i]  << "," << brr[j] << ")"<< " ";
            }
        }
    }
}

int main(){
    vector<int>arr{1,3,4,10,5,7};
    int sizea=arr.size();
    vector<int>brr{2,4,6,-1};
    int sizeb=brr.size();

    //Answer ARRAY
    vector<int>ans;
    int sum=9;


    //FunctionCall
    PairSum(arr,brr,sum);



}