//Reference https://leetcode.com/problems/missing-number/submissions/1104391153/
// 268.Missing Number Leetcode

#include<iostream>
#include<vector>
using namespace std;

void PrintingElements(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int Missing(vector<int>& nums){
    int k=nums.size()+1;
    int n=nums.size();
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+nums[i];
    }
    int CorrectSum=((k)*(k+1))/2;
    int finalans=CorrectSum-sum;
    return finalans;
}



int main(){
    vector<int>nums{1,2,4,5,6,7};
    PrintingElements(nums);
    cout << "Now Finding Missing Number in this array "<< endl;
    int Number=Missing(nums);
    cout << Number << endl;
}