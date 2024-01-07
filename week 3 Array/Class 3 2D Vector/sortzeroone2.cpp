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
    vector<int>arr{0,1,0,1,1,0,1,0,1,1};
    // PrintArray(arr);

    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i<end){
        if(arr[i]==1){
            cout << "Found One" << endl;
            cout << "Before Swapping" << endl;
            PrintArray(arr);

            swap(arr[i],arr[start]);

            cout << "After Swapping" << endl;
            PrintArray(arr);
            i++;
            start++;
            cout << "Now i=" << i << " , start=" << start  << " and end="<< end << endl;
        }

        else{
            cout << "Found zero " << endl;
            cout << "Before Swapping" << endl;
            PrintArray(arr);
            swap(arr[i],arr[end]);
            cout << "After Swapping " << endl;
            PrintArray(arr);

            end--;
            cout << "Now i=" << i << " , start=" << start  << " and end="<< end << endl;
            
        }
    }
}