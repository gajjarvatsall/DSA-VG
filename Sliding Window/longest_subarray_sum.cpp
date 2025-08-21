#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp; // prefixSum -> first index
        int prefixSum = 0, maxLen = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];

            // Case 1: subarray from start
            if (prefixSum == k) {
                maxLen = max(maxLen, i + 1);
            }

            // Case 2: check if (prefixSum - k) seen before
            if (mp.find(prefixSum - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum - k]);
            }

            // Store prefixSum if not seen before
            if (mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }
        
        return maxLen;
    }
};

int main()
{
    
    return 0;
}