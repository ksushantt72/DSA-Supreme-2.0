#include <iostream>
#include<vector>
using namespace std;

//Creating a function to print the Array
void PrintArray(vector<int>&arr){
    for(int i:arr){
        cout << i << " ";
    }
}

void SortZeroOne(vector<int>&arr){
    int start= 0;
    int end = arr.size()-1;
    int i =0;
    while(i!=end){
        if(arr[i]==0){
            //agar zero mill gaya hai to badhiya hai isko start se swap krke dono increase kr denge
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else{
            //agar arr[i] me 1 mila hai to pehle usko end se swap krenge
            //fir end ko decrease krenge
            //lekin iss case me i ko increase nahi krenge
            //kyuki swap hoke jo left me aaya hai wo 0 hai ye 1 ye nahi pata hai 
            swap(arr[i],arr[end]);
            end--;
        }
    }
}


int main()
{
    int n;
    cout << "Enter the Number of Element you want:";
    cin >> n;

    //creating an array/vector of n size
    vector<int>arr(n);
    //taking input in n
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //printing the input taken array 
    cout << "Printing the Array before sorting :";
    PrintArray(arr);
    cout << endl;

    SortZeroOne(arr);

    cout << "Printing the Array After sorting :";
    PrintArray(arr);
    cout << endl;

    

    return 0;
}