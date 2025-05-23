#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int> &temperatures, vector<int> &ans) {
        stack<int> st; // stores indices

        for (int i = temperatures.size() - 1; i >= 0; i--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
    }

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); // initialize with 0s
        solve(temperatures, ans);
        return ans;
    }
};

int main()
{
    
    return 0;
}