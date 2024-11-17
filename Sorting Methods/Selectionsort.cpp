#include <iostream>
#include <vector>
using namespace std;

int PrintArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Function Declaration for SelectionSort
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void createArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Inout for Index :- " << i << " : ";
        cin >> arr[i];
    }
}

void PrintArray(int arr[], int size)
{
    // Printing array Logic
    cout << "Printing Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    createArray(arr, size);
    cout << "Printing Before Sorting : "<< endl;
    PrintArray(arr,size);
    
    SelectionSort(arr, size);
    cout << "Printing After Sorting : "<< endl;
    PrintArray(arr,size);
}