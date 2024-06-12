#include <iostream>
#include <stack>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> NextSmallerIndex(vector<int> &heights, int size)
{
    vector<int> ans(size);
    stack<int> st;
    st.push(-1);
    //-1 is pushed for the first element comparison

    for (int i = size - 1; i >= 0; i--)
    {
        int curr = heights[i];
        while (st.top() != -1 && heights[st.top()] >= curr)
        {
            // int this case we will pop that element from the index
            st.pop();
        }
        // when we are here it means that the top element has the smaller number than tha curr
        ans[i] = st.top();
        // we are storing index in the stack
        // and comparing the element in the array at the stack in the while loop
        st.push(i);
    }
    // when we are out of the for loop
    // we have our answer array prepared
    return ans;
}

vector<int> prevSmallerIndex(vector<int> &heights, int size)
{
    vector<int> ans(size);
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < size; i++)
    {
        int curr = heights[i];
        while (st.top() != -1 && heights[st.top()] > curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> heights{2, 1, 5, 6, 2, 3};
    int size = heights.size();
    vector<int> next = NextSmallerIndex(heights, size);
    // Printing answer array
    cout << "Answer Array Containing next Smaller Element's Index are : " << endl;
    for (auto index : next)
    {
        cout << index << " ";
    }
    cout << endl;
    //for next
    for (int i = 0; i < next.size(); i++)
    {
        if (next[i] == -1)
        {
            // in that case we will change it to size coz there is no element smaller after that
            int k = i;
            int indexValue = 0;
            while (k < next.size())
            {
                indexValue++;
                k++;
            }
            // when we are here the block containing -1 will have width from that index till last
            next[i] = indexValue;
        }
        else
        {
            // calculating width when the index is not -1
            // then using while loop we will count width
            int count = abs(next[i] - i);
            int widthCount = 0;
            while (count != 0)
            {
                widthCount++;
                count--;
            }
            // jab yahan honge tb count 0 ho chuka hoga
            // we will initialize width count in ans[i]
            next[i] = widthCount;
        }
    }
    for (auto index : next)
    {
        cout << index << " ";
    }
    cout << endl;

    cout << "Processing for PrevSmaller Function" << endl;

    vector<int> prev = prevSmallerIndex(heights, size);
    // Printing answer array
    cout << "prev Smaller Element's Index are : ";
    for (auto index : prev)
    {
        cout << index << " ";
    }
    cout << endl;

    // now we will manipulate the block containing index -1
    for (int i = 0; i < prev.size(); i++)
    {
        if (prev[i] == -1)
        {
            // in that case we will change it to size coz there is no element smaller after that
            int k = i;
            int indexValue = 0;
            while (k != -1)
            {
                indexValue++;
                k--;
            }
            // when we are here the block containing -1 will have width from that index till last
            prev[i] = indexValue;
        }
        else
        {
            // when prev[i] doesnot contain -1 we will just increase width count
            int widthCount2 = 0;
            int count = abs(prev[i] - i);
            while (count != 0)
            {
                widthCount2++;
                count--;
            }
            prev[i] = widthCount2;
        }
    }
    cout << "Next ";
    for (auto index : next)
    {
        cout << index << " ";
    }
    cout << endl;

    cout << "prev ";
    for (auto index : prev)
    {
        cout << index << " ";
    }
    cout << endl;

    int maxi = INT_MIN;
    // Now i have everyting to proceed
    for (int i = 0; i < heights.size(); i++)
    {
        int length = heights[i];
        int width = next[i] + prev[i] - 1;

        int area = length * width;
        maxi = max(maxi, area);
    }
    cout << "Maximum Area of Rectangle in Histogram is : " << maxi << endl;
}