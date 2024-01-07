#include<iostream>
#include<vector>
using namespace std;

//Function Declaration for wave Printing
void WavePrint(vector<vector<int>>v){
    int m=v.size();           //--->> No. of rows
    int n=v[0].size();         //--->> No. of columns
    for(int col=0;col<n;col++){
        if(col%2==0){
            //This one is for even columns and TOP to BOTTOM
            for(int row=0;row<m;row++){
                cout <<  v[row][col] << " ";  
            }
        }
        else {
            //This one is for odd and BOTTOM to TOP
            for(int row=m-1;row>=0;row--){
                cout <<  v[row][col] << " ";  
            }
        }
    }
}
 
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}

    };
    WavePrint(v);
}