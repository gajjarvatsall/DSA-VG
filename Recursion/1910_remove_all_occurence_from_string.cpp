// 1910
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/


#include <bits/stdc++.h>
using namespace std;
string solve(string s, string part)
{
    size_t pos = s.find(part); // Find the leftmost occurrence of 'part'

    // Base case: if 'part' is not found, return the modified string
    if (pos == string::npos)
        return s;

    // Remove 'part' from 's' and call recursion on the new string
    string newStr = s.substr(0, pos) + s.substr(pos + part.length());

    return solve(newStr, part); // Recursive call
}

string removeOccurrences(string s, string part)
{
    return solve(s, part);
}

int main()
{

    return 0;
}