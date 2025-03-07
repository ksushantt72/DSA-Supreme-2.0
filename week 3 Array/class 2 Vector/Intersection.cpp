#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{2,4,6,8,10};
    vector<int>brr{2,4,6,8};

    vector<int>ans;
    //Intersection of arr and brr

    for(int i=0;i<arr.size();i++){
        //For every element in arr checking in brr
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
            }
        }
    }

    // for(int i=0;i<ans.size();i++){
    //     cout << ans[i] << " ";
    // }

    //We can avoid the above commented loop using

    for(auto value: ans){
        cout << value << " ";
    }



}