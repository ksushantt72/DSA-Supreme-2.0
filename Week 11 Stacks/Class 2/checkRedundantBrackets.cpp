#include <iostream>
#include <stack>
using namespace std;

bool checkRedundancy(string &str)
{
    stack<char> st;
    // pehle traversal ke liye for loop chalaynge
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            // aise case me stack me push kr denge
            st.push(ch);
        }
        else if (ch == ')')
        {
            // aise case me pop krke check krenge ki har ek pair of bracket ke liye operator hai ya nahi
            int operatorCount = 0;
            // using while loop hm stack me operator count krnege
            while (st.empty() || st.top() != '(')
            {
                operatorCount++;
                st.pop();
            }
            // Yahan hai iska mtlbb while condition false ho gya hai
            // aur hm stack ke top pe '(' hai
            // to hm isko pop kr denge
            st.pop();
            if (operatorCount == 0)
            {
                return true;
            }
        }
    }
    // Jab hm yahan pe honge iska mtlbb hoga ki true execute nhi hua
    //  hai and saare corres. pairs pop ho chuke hain
    // to false tb krenge jab mera stack empty ho jaaye qki ye bhi ho skta hai ki koi element bacha ho
    // and if else use check nahi kr paaye ho
    if (st.empty())
    {
        return false;
    }
    else{
        //aur agar stack me elements bache hain to tru
        return true;
    }
}

int main()
{
    string str = "(a*(a+(b*c))+(c+d))";
    // this string has not redundant brackets

    bool ans = checkRedundancy(str);
    if (ans)
    {
        cout << "String has redundant Brackets" << endl;
    }
    else
    {
        cout << "String has no redundant Brackets" << endl;
    }
}