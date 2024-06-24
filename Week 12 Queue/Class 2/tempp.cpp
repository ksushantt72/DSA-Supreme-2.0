#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main()
{
    deque<int>dq;

    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);
    dq.push_back(400);
    dq.push_back(500);

    dq.pop_front();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    return 0;
}