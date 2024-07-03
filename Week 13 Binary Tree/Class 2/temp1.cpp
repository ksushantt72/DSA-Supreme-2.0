#include <iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<vector <int>>ans;
    vector<int>v1{10,20,30};
    ans.push_back(v1);

    //Now printing the ans vector
    for(int i=0;i<ans.size();i++){
    //Your code Here
        for(int j=0;j<ans.size();j++){
        //Your code Here
        cout << ans[i][j] << endl;
        }
    }
    return 0;
}