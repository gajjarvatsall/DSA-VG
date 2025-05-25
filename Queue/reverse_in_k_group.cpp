#include <bits/stdc++.h>
using namespace std;

void reverseInKGroup(queue<int> &qt, int k, int count)
{
    if (count >= k)
    {
        stack<int> st;
        for (int i = 0; i < k; i++)
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
        reverseInKGroup(qt, k, count - k);
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int ele = qt.front();
            qt.pop();
            qt.push(ele);
        }
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
    qt.push(60);
    qt.push(70);
    qt.push(80);

    int k = 3;
    int count = qt.size();
    reverseInKGroup(qt, k, count);
    while (!qt.empty())
    {
        cout << qt.front() << endl;
        qt.pop();
    }
    return 0;
}