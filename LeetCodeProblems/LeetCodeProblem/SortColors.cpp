#include<iostream>
#include<vector>
using namespace std;
//Function Declaration
void PrintingArray(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}
void Sorting(vector<int>& arr){
    int index=0;
    int left=0;
    int right=arr.size()-1;
    while(index<=right){
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }
        else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
            //Catch---> No need to use Index++ here
        }
        else{
            index++;
        }
    }

}


int main(){
    vector<int>arr{1,0,2,2,1,0,1,0};
    Sorting(arr);
    cout << "Printing after Sorting" << endl;
    PrintingArray(arr);

}
