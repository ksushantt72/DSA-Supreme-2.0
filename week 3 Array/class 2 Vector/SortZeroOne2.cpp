#include<iostream>
#include<vector>
using namespace std;


void PrintArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int>arr{0,1,0,0,1,1,0,1,0,1,1};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end){
        if(arr[i]==0){
            //Here No need of Swapping only Updation is required
            //Both Code works the Same

            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{

            swap(arr[end],arr[i]);
            end--;
            //here i isnot updated because we dont know 
            //that the swapped value from end is zero or one
            //so not updating it checks it again after swapping.
        }
    }

PrintArray(arr);
    
}
