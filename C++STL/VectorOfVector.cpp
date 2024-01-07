#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintVector(vector<vector<int> >&arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    vector<vector<int> >arr;
    int n;
    cout << "Enter the Size of Vector" << endl;
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cout << "Enter the Value of a and b " << endl;
        cin >> a >> b;

        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        arr.push_back(temp);

    }
    cout << "Printing the Vector" << endl;
    PrintVector(arr);



}