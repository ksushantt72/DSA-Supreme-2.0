//2149. Rearrange Array Element By Sign
//https://leetcode.com/problems/rearrange-array-elements-by-sign/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums{3,1,-2,-5,2,-4};
    vector<int>arr1;
    vector<int>arr2;

    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            arr1.push_back(nums[i]);
        }
        else{
            arr2.push_back(nums[i]);
        }
    }
    cout << "Printing Array1" << endl;
    for(int i=0;i<arr1.size();i++){
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Printing Array2" << endl;
    for(int i=0;i<arr1.size();i++){
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    cout << endl;

    cout << "Printing as Pair of Alternate Positive and Negative "<< endl;

    for(int i=0;i<3;i++){
        cout <<"(" << arr1[i] << "," << arr2[i] << ")" << " ";
    }
    cout <<endl;



}