#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>ans;
    ans.push_back(100);
    if(ans.empty()){
        cout << "true" << endl;
    }
    else{
        cout << "False" << endl;
    }

}