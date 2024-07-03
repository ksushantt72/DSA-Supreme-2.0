#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<vector<int> >arr(5,vector<int>(10,0));
    //Printing the Vector
    
    //Rows Of 2D Vector= arr.size();
    for(int i=0;i<arr.size();i++){
    //column of ith Row = arr[i].size();
        for(int j=0;j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

}