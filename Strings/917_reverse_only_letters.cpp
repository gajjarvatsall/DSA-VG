//  917
// https://leetcode.com/problems/reverse-only-letters/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int i = 0;
        int j = s.size() - 1;

        while (i < j)
        {
            if (!(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')))
            {
                i++;
            }
            else if (!(('A' <= s[j] && s[j] <= 'Z') || ('a' <= s[j] && s[j] <= 'z')))
            {
                j--;
            }
            else
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

int main()
{

    return 0;
}