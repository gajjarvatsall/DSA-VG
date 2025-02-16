// 1910
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.find(part) != string::npos)
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main()
{

    return 0;
}