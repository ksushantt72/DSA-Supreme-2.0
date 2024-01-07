#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>brr{0,10,20,30,40,50,60,70,80,90,100};
    int size=brr.size();
    int sum=60;

    for(int i=0;i<size;i++){
        int element1=brr[i];
        for(int j=0;j<size;j++){
            int element2=brr[j];
            for(int k=0;k<size;k++){
                if(element1+element2+brr[k]==sum){
                    cout << "(" << element1 << "," << element2 << "," << brr[k] << ")"<< endl;
                }
            }
        }
    }

}