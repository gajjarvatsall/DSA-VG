#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    int i = 1;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.empty())
        {
            ans.push_back(s[i]);
        }
        else if (s[i] == ans.back())
        {
            ans.pop_back();
        }
        else if (s[i] != ans.back())
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

string removeDuplicates1(string s, int k)
{
    string temp = s;
    int c = 0;
    int j = 1;
    int i = j - 1;
    while (j < s.length())
    {

        // cout << "Before :- " << endl;
        // cout << "i -> (" << i << " - " << s[i] << ") " << "j -> (" << j << " - " << s[j] << ") c -> " << c << endl;
        // cout << s << endl;
        if (s[i] == s[j])
        {
            c++;
        }
        else if (s[i] != s[j])
        {
            c = 0;
        }
        if (c == k - 1)
        {
            s.erase(j - (k - 1), k);
            c = 0;
            j = 1;
            i = 0;
        }
        else
        {
            j++;
            i = j - 1;
        }
        // cout << endl;
        // cout << "After :- " << endl;
        // cout << "i -> (" << i << " - " << s[i] << ") " << "j -> (" << j << " - " << s[j] << ") c -> " << c << endl;
        // // cout << "i -> " << s[i] << " " << "j -> " << s[j] << " c -> " << c << endl;
        // cout << s << endl;
        // cout << "--------------------------------------";
        // cout << endl;
    }
    return s;
}

int main()
{
    string s = "abcd";
    int k = 2;

    string ans = removeDuplicates1(s, k);

    cout << "Ans :- " << ans << endl;
    return 0;
}