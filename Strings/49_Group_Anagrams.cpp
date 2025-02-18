// 49
// https://leetcode.com/problems/group-anagrams/description/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;

    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{

    return 0;
}