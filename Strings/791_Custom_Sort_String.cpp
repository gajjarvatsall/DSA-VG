// 791
// https://leetcode.com/problems/custom-sort-string/description/

#include <bits/stdc++.h>
using namespace std;

static string orderCopy;
class Solution
{
public:
    static bool cmp(char a, char b)
    {
        return (orderCopy.find(a) < orderCopy.find(b));
    }
    string customSortString(string order, string s)
    {
        orderCopy = order;
        sort(s.begin(), s.end(), cmp);
        return s;
    }
};

int main()
{

    return 0;
}