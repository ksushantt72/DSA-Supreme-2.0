#include <iostream>
#include <vector>
using namespace std;

//Creating an array to print the Array  ELements
void PrintArray(vector<int>arr){
    int n=arr.size();
    for(int i:arr){
        cout << i << " ";
    }
}
void SortArray(vector<int>&arr){
    int n=arr.size();
    int start = 0;
    int end = n-1;
    int i=0;
    //we will sort in a way such that the zero will be in starting and 1 will be in ending
    while(i!=end){
        if(arr[i]==0){
            //agar 0 milega to usko start se swap krke  index i ko increase krke aage badha denge
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else{
            //in else case we are getting 1
            //so we will swap it with end and decrease it everytime
            swap(arr[i],arr[end]);
            end--;
            //but we will not increase i because the i needs to be checked again coz we dont know 
            //what value has been swapped
            
        }
    }
}



int main()
{
    vector<int>arr{1,0,0,1,1,1,0,0,1,0};
    PrintArray(arr);
    return 0;
}