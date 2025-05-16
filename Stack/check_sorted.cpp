#include <bits/stdc++.h>
using namespace std;
bool checkSorted(stack<int> &s)
{
    if (s.size() <= 1)
    {
        return true;
    }

    int temp = s.top();
    s.pop();
    if (temp < s.top())
    {
        return false;
    }
    bool ans = checkSorted(s);

    s.push(temp);

    return ans;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << checkSorted(s) << endl;
    return 0;
}