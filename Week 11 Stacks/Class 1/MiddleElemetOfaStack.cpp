#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &st, int &pos, int &ans)
{
    // agar position -1 nahi hai to hmko pehle pop krna hai
    // BASE CASE
    if (pos == 1)
    {
        // Agar 1st position pe aa gye hain to
        ans = st.top();
        return;
    }

    // 1 case khud se solve krna hai

    pos--;

    // top pe jo element hai usko pehle store kr kenge
    int temp = st.top();

    // store krne ke baad usko remove kr denge
    st.pop();

    // uske baad recursive call krenge
    solve(st, pos, ans);

    // Jab wapis lautenge to temp ko uske jagah place kr denge
    st.push(temp);
}

// int getMiddleElement(stack<int> &st)
// {
//     // length of stack
//     int len = st.size();
//     int position = 0;

//     // Now we will be writing if else statement ot find whether it is odd or even stack
//     if (st.empty())
//     {
//         // Agar Stack empty hai to return -1
//         return -1;
//     }
//     else
//     {
//         if (len % 2 == 1)
//         {
//             // odd case
//             position = len / 2 + 1;
//         }
//         else
//         {
//             // This is Even Stack
//             position = len / 2;
//         }
//     }
//     int ans = -1;
//     // yahan pe jo position hai wo hm solve me pass krenge ;
//     solve(st, position, ans);
//     // finally we will return ans where ans is passed by refernce and will be chnaged when solve function executes
//     return ans;
// }

int main()
{

    // creation of Stack
    stack<int> st;

    // Pushing Values to the st stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    // We have to return the middle element of stack
    // Here in this case middle element is 40
    if (st.empty())
    {
        cout << "Stack is Empty, So no Middle Element" << endl;
    }
    else
    {
        int pos;
        // stack is not empty, Middle Element is Present
        if (st.size() % 2 == 1)
        {
            // odd Number of Elements in Stack
            pos = st.size() / 2 + 1;
        }
        else
        {
            // Even NUmber of Elements in Stack
            pos = st.size() / 2;
        }

        int ans = -1;
        solve(st, pos, ans);
        if (ans == -1)
        {
            // Then there is no Mid ELement
        }
        else
        {
            cout << "Middle Element is : " << ans << endl;
        }
    }


}