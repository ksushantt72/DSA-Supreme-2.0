#include<iostream>
#include<vector>
using namespace std;

void PrintArray(vector<int>& nums){
    cout << "Printing the Elements Taken as input "<< endl;
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}


void Rotation(vector<int>& nums,int k){
    int n=nums.size();
    vector<int>ans(n);
    for(int index=0;index<n;index++){
        int newindex=(index+k)%n;
        ans[newindex]=nums[index];
        //This statement means that
        //ans Vector ke newindex pe jo element hoga,
        //wo nums ke index wale element pe tha
    }
    nums=ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<nums.size();i++){
        cin >> nums[i];
    }

    PrintArray(nums);
    int k;
    cout << "Enter the Value of K for which you want rotation to be done ";
    cin >>k;
    cout <<  endl;
    Rotation(nums,k);
    cout << "Printing the Array After Rotation ";
    PrintArray(nums);
    cout << endl; 

}