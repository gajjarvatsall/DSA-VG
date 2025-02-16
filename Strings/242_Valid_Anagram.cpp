// 242
// https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        bool ans = false;
        unordered_map<char, int> umap;
        for (int i = 0; i < s.length(); i++)
        {
            umap[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            umap[t[i]]--;
        }
        for (auto i : umap)
        {
            if (i.second != 0)
            {
                ans = false;
                return ans;
            }
            else
            {
                ans = true;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}