#include<iostream>
#include<vector>
using namespace std;

int FindUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,4,2,1,3,6,5,5,6,4};
    int size=arr.size();

    int finalans=FindUnique(arr);
    cout << "Unique Element is : " << finalans << endl;

}