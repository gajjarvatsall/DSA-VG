// 28
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int ans = 0;
    if (haystack.find(needle) == string::npos)
    {
        return -1;
    }
    else
    {
        ans = haystack.find(needle);
    }
    return ans;
}

int main()
{

    return 0;
}