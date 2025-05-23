#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char ch : num) {
            while (!st.empty() && k > 0 && (st.top() - '0') > (ch - '0')) {
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        if (st.empty())
            return "0";
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());

        // Remove leading zeros after reversing
        int i = 0;
        while (i < result.size() && result[i] == '0') {
            i++;
        }
        result = result.substr(i);

        if (result.empty())
            return "0";
        return result;
    }
};

int main()
{
    
    return 0;
}