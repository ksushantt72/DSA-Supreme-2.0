#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack
{
public:
    vector<pair<int,int> > v;
    int val;
    //Default Constructor

    MinStack(){}

    void push(int val){
        if(v.empty()){
            //agar vector empty hai to first or second element same rhega
            pair<int,int>p=make_pair(val,val);
            v.push_back(p);
        }
        else{
            //in this case the minimum will be the minimum of previous and curr element
            pair<int,int>p;
            p.first=val;
            p.second=min(val,v.back().second);
            v.push_back(p);
        }
    }
    
    void pop(){
        //agar array empty hai to pop possible nahi hoga
        if(v.empty()){
            return;
        }
        else{
            v.pop_back();  
        }

    }
    int topElement(){
        //first we will check if the array is empty or not
        if(v.empty()){
            return 0;
        }
        else{
            //agar empty nhi hai to righmost pair ka first hi top element hoga
            pair<int,int>rightMostPair=v.back();
            //the righmostPair's first value will be our top element
            return rightMostPair.first;
        }
    }
    int getMin(){
        if(v.empty()){
            return 0;
        }
        else{
            //agar empty nhi hai to righmost pair ka second hi min element hoga
            pair<int,int>rightMostPair=v.back();
            //the righmostPair's second value will be our Minimum element
            return rightMostPair.second;
        }
    }

};


int main()
{
    MinStack p;
    p.push(10);
    p.push(20);
    p.push(500);
    p.push(60);
    p.push(1);

    cout << "The First Element is : "<< p.topElement() << endl;
    cout << "The Minimum Element in the Array is: "<< p.getMin() << endl;



}