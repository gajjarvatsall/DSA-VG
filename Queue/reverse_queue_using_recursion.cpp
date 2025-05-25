#include <bits/stdc++.h>
using namespace std;
void reverseUsingRecursion(queue<int> &qt)
{
    if (qt.empty())
    {
        return;
    }

    int ele = qt.front();
    qt.pop();

    reverseUsingRecursion(qt);

    qt.push(ele);
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
    reverseUsingRecursion(qt);
    cout << "After Reverse :- " << endl;
    while (!qt.empty())
    {
        cout << qt.front() << endl;
        qt.pop();
    }
    return 0;
}