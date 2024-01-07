//Unique Element Question

#include<iostream>
#include<vector>
using namespace std;

//FunctionDeclaration
int FindUnique(vector<int> arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the Size of array: ";
    cin >> n;

    //vector creation
    vector<int> arr(n);
    cout << "Enter the Elements" << endl;
    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }

    // Printing the Stored Arrays Elements
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Function Call

    int UniqueElement=FindUnique(arr);
    cout << "Unique Element is: "<< UniqueElement<< endl;


}