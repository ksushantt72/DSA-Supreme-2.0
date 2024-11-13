#include <iostream>
using namespace std;

int findTargetIndex(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        if (curr > target)
        {
            return i;
        }
    }
    // if the i has not been returned that means there are no grater element
    // in this case we need to return
    return size;
}

int main()
{
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    int arr[n];

    // Taking input of the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Value for Array Corresponding to Index : " << i << " : ";
        cin >> arr[i];
    }

    cout << "Array taken as Input is : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;



    int target;
    cout << "enter the Target element : ";
    cin >> target;
    int ans=findTargetIndex(arr,target,n);
    if(ans < n ){
        cout << "The Index of first element which was greater then Target ELement is : "<< ans << endl;
    }
    else{
        cout << "The Target element was greater than each and every element, so  length of array is :"<< ans << endl;
    }
    return 0;
}