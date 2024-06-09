#include <iostream>
#include <vector>
#include<limits.h>
#include<algorithm>
using namespace std;

void AverageSubarray(vector<int> &nums, vector<double> &ans, int k)
{

    int tempk = k;
    for (int i = 0; i + k <= nums.size(); i++)
    {
        // storing i for resetting after while  loop fininshes;
        int tempi = i;
        int sum = 0;
        while (k!=0)
        {
            sum += nums[i];
            i++;
            k--;
        }
        //resetting the values of i and k 
        i = tempi;
        k=tempk;
        double average = 0;
        // finding average
        average = sum / (double)k;
        ans[i] = average;
    }

}

double Method2(vector<int>&nums,int k){
    int i=0;
    int j=k-1;  
    int sum=0;
    int maxSum=INT_MIN;
    while(i!=j+1){
        sum=sum+nums[i];
        //increase i;
        i++;
    }
    //when we are here , we have one sum 
    //now we will be subtracting and adding in this sum
    maxSum=max(sum,maxSum);
    int x=0;
    int y=k-1;
    while(y<nums.size()){
        sum=sum-nums[x++];
        sum=sum-nums[++y];
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}




int main()
{
    vector<int> nums{1, 12, -5, -6, 50, 3};
    int k = 4;
    // vector<double> ans(nums.size());
    // AverageSubarray(nums, ans, k);
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << Method2(nums,k);


}