#include <bits/stdc++.h>
using namespace std;
void reverseUsingStack(queue<int> &qt)
{
    stack<int> st;
    while (!qt.empty())
    {
        int ele = qt.front();
        qt.pop();
        st.push(ele);
    }
    while (!st.empty())
    {
        int ele = st.top();
        st.pop();
        qt.push(ele);
    }
}
int main()
{
    queue<int> qt;
    qt.push(10);
    qt.push(20);
    qt.push(30);
    qt.push(40);
    qt.push(50);

    // cout << "Before Reverse :- " << endl;
    // while (!qt.empty())
    // {
    //     cout << qt.front() << endl;
    //     qt.pop();
    // }
    reverseUsingStack(qt);
    cout << "After Reverse :- " << endl;
    while (!qt.empty())
    {
        cout << qt.front() << endl;
        qt.pop();
    }
    return 0;
}