#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(int arr[], int size)
{
    stack<int> st;
    vector<int>ans(size);
    st.push(-1);

    // starting for loop from the last element of the array
    for (int i = size - 1; i >= 0; i--)
    {
        int curr = arr[i];
        // the top element of the stack will be the next element of the array
        // so to check if the next element of the array is smaller or not
        while (st.top() >= curr)
        {
            // jab tk curr grater na ho jaye array ke next elements se tb tk pop krwa denge
            st.pop();
        }
        // yahan hain mtbb stack ke top pe next smaller hai
        ans[i] = st.top();
        // now for comparison further, we will store the curr in stack
        st.push(curr);
    }
    return ans;
}

int main()
{
    int arr[] = {8, 4, 6, 2, 3};

    int size = sizeof(arr) / sizeof(int);
    vector<int> ans(size);
    vector<int>finalans=nextSmallerElement(arr, size);


    for (auto i : finalans)
    {
        cout << i << " ";
    }
    cout << endl;
}