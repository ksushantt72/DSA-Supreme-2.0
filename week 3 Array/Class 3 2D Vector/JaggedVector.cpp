#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> >arr;
    //Now Creating 1-d Vectors to insert in 2D to create jagged 

    
    vector<int>vect1(6,1);
    vector<int>vect2(5,2);
    vector<int>vect3(4,3);
    vector<int>vect4(3,2);
    vector<int>vect5(2,1);
    vector<int>vect6(1,0);

    //Now Push It to 2D vector
    arr.push_back(vect1);
    arr.push_back(vect2);
    arr.push_back(vect3);
    arr.push_back(vect4);
    arr.push_back(vect5);
    arr.push_back(vect6);


    //Printing array After creating a jagged array
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}