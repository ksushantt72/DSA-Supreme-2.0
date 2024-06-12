#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmaller(vector<int> &arr)
{
    int size = arr.size();
    vector<int> ans(size);
    stack<int> st;
    st.push(-1); //-1 so that the first element can be compared

    for (int i = size - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            // since the stack stores the index of smaller element, if
            //  we got any larger values in stack, will pop
            st.pop();
        }
        // when we are here it means curr < st.top element
        ans[i] = st.top();
        // for further comparison we will push the curr element index
        st.push(i);
    }
    // when we are out of for loop, our ans array is created successfully
    return ans;
}

vector<int> prevSmaller(vector<int> &arr)
{
    int size = arr.size();
    vector<int> ans(size);
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
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
    vector<int> next = nextSmaller(heights);
    vector<int> prev = prevSmaller(heights);

    // since our prev and next array containing index of
    // prev Smaller and next smaller are created succesfully

    // processing Next
    for (int i = 0; i < next.size(); i++)
    {
        
        if (next[i] == -1)
        {
            // in that case we will count width till end
            int k = i;
            int widthCount = 0;
            while (k < next.size())
            {
                widthCount++;
                k++;
            }
            next[i] = widthCount;
        }
        else
        {
            int countLoop = abs(next[i] - i);
            int widthCount = 0;
            while (countLoop != 0)
            {
                widthCount++;
                countLoop--;
            }
            next[i] = widthCount;
        }
    }
    // in this way our next array is containing width of rectangle from R->L

    // Processing prev
    for (int i = 0; i < prev.size(); i++)
    {
        
        if (prev[i] == -1)
        {
            // if the prev is containing -1 it means there is no smaller bar in prev
            // so we need to include all that in out width
            int k = i;
            int widthCount = 0;
            while (k != -1)
            {
                // till k!=0 we will increase widCount and push it in prev array
                widthCount++;
                k--;
            }
            // when we are here we will push width count to prev containing -1
            prev[i] = widthCount;
        }
        else
        {
            int countLoop = abs(prev[i] - i);
            int widthCount = 0;
            while (countLoop != 0)
            {
                widthCount++;
                countLoop--;
            }
            prev[i] = widthCount;
        }
    }

    // since next and prev contains next and prev width of rectangle
    //  int maxArea=0;
    //  for(int i=0;i<heights.size();i++){
    //      int length=heights[i];
    //      int width=prev[i]+next[i]-1;
    //      int currArea=length*width;
    //      maxArea=max(maxArea,currArea);
    //  }
    for (auto i : prev)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : next)
    {
        cout << i << " ";
    }
    cout << endl;
}
