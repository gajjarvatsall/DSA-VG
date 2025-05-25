#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> q;
        vector<int> ans;

        // Process first window
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                q.push_back(i);
            }
        }

        // Add result for the first window
        ans.push_back(q.empty() ? 0 : arr[q.front()]);

        // Process rest of the windows
        for (int i = k; i < arr.size(); i++) {
            // Remove indices that are out of this window
            if (!q.empty() && q.front() <= i - k) {
                q.pop_front();
            }

            // Add current element if it's negative
            if (arr[i] < 0) {
                q.push_back(i);
            }

            // Add current result
            ans.push_back(q.empty() ? 0 : arr[q.front()]);
        }

        return ans;
    }
};

int main()
{
    
    return 0;
}