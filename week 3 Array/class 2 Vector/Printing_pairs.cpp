#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>Sushant{10,20,30,40,50,60,70,80,90,100};
    int size=Sushant.size();

    //Printing Pairs from Array of Sushant

    for(int i=0;i<size;i++){
        cout << "Pair of "<< i+1 << " Part is ";
        int element=Sushant[i];
        cout << endl << endl;
        
        for(int j=0;j<size;j++){
            cout <<"(" << element << "," << Sushant[j] << ")" << endl;
        }
        cout << endl;
    }
}