#include <iostream>
#include <deque>
#include <queue>
#include <stack>
using namespace std;

void PrintFirstNegOfEveryWindow(int *arr, int n, int k)
{
    // Creating Doubly Ended Queue for Storing Negative Numbers
    deque<int> dq;

    for (int i = 0; i < k; i++)
    {
        // for first Window of k
        // we will store the Negative number
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // here till k=2 we will have our negative number's index pushed into the deque dq
    // Now we will slide the window till n

    for (int i = k; i < n; i++)
    {
        // Agar dq empty hai to 0 print krenge
        if (dq.empty())
        {
            cout << " 0 " << " ";
        }
        // agar empty nahi hai to front element push krenge
        else
        {
            cout << arr[dq.front()] << " ";
        }
        // jab printing ho gya tb window ko slide krenge

        // Removal
        // Removal will take place if the index doesnot belong to the window we are working on
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        // Addition
        // addition will take place if and only if it is negative
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }

        // Now we will print the desired value
    }


    //Last index ko yahan se access kr lenge
    if(dq.empty()){
        cout << " 0 " << " ";
    }
    else {
        cout << arr[dq.front()]<< " ";
    }
}

int main()
{

    int arr[] = {2, -5, 4, -1, -2, 0, 5};
    int size = sizeof(arr) / sizeof(int);

    int k = 3;
    PrintFirstNegOfEveryWindow(arr,size,k);

    return 0;
}