// 344
// https://leetcode.com/problems/reverse-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<char> &s, int st, int ed)
    {
        if (st > ed)
            return;
        swap(s[st], s[ed]);
        solve(s, st + 1, ed - 1);
    }
    void reverseString(vector<char> &s)
    {
        int st = 0;
        int ed = s.size() - 1;
        solve(s, st, ed);
    }
};
int main()
{
    vector<char> arr = {'h', 'e', 'l', 'l', 'o'};
    Solution ob;
    ob.reverseString(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}