#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> ch;

        for (int i = 0; i < s.length(); i++)
        {
            if (ch.empty())
            {
                ch.push(s[i]);
            }
            else if (ch.top() == '(' && s[i] == ')')
            {
                ch.pop();
            }
            else if (ch.top() == '{' && s[i] == '}')
            {
                ch.pop();
            }
            else if (ch.top() == '[' && s[i] == ']')
            {
                ch.pop();
            }
            else
            {
                ch.push(s[i]);
            }
        }
        return ch.empty();
    }
};
int main()
{

    return 0;
}