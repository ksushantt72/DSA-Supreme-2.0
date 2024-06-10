#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    //ways of creating Pair
    pair<int,int>pair1;
    pair1.first=10;
    pair1.second=20;

    //other way in which we dont need to write first and second
    pair<int,int>pair2=make_pair(40,50);


    cout << "first Element of Pair1 :"<< pair1.first << " and Second Element of Pair1 : "<< pair1.second  << endl;
    cout << "first Element of Pair2 :"<< pair2.first << " and Second Element of Pair2 : "<< pair2.second  << endl;



    //Creating a vector of pairs
    vector<pair<int,int>>vect;
    vect.push_back(pair1);
    vect.push_back(pair2);

    //Now printing the first elements of vector which has pair
    cout << "First Elements of Pair in Vector : ";
    for(int i=0;i<vect.size();i++){
        cout << vect[i].first << " ";
    }
    cout << endl;



    //Now printing the second elements of vector which has pair
    cout << "second Elements of Pair in Vector : ";
    for(int i=0;i<vect.size();i++){
        cout << vect[i].second << " ";
    }
    cout << endl;
}