#include<iostream>
#include<vector>
using namespace std;

//FunctionDeclaration
    void PrintArray(vector<int>ans){
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
int main(){
    vector<int>arr{2,3,3,4,5,6,7};
    int sizea=arr.size();
    vector<int>brr{3,3,5,6,7};
    int sizeb=brr.size();

    //Answer ARRAY
    vector<int>ans;

    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                ans.push_back(brr[j]);
                brr[j]=-1;
            }
        }
    }

    PrintArray(ans);


}